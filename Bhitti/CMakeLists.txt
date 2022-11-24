cmake_minimum_required(VERSION 3.5)

project(Bhitti VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

include(FetchContent)
FetchContent_Declare(cpr GIT_REPOSITORY https://github.com/libcpr/cpr.git
                         GIT_TAG 871ed52d350214a034f6ef8a3b8f51c5ce1bd400) # The commit hash for 1.9.0. Replace with the latest from: https://github.com/libcpr/cpr/releases
FetchContent_MakeAvailable(cpr)

set(PROJECT_SOURCES
        main.cpp
        login.cpp
        login.h
        login.ui
        employeedash.cpp
        employeedash.h
        employeedash.ui
        neworder.cpp
        neworder.h
        neworder.ui
        trackorder.cpp
        trackorder.h
        trackorder.ui
        viewproduct.cpp
        viewproduct.h
        viewproduct.ui
        cancelorder.cpp
        cancelorder.h
        cancelorder.ui
        admindash.cpp
        admindash.h
        admindash.ui
        attendance.cpp
        attendance.h
        attendance.ui
        newproduct.cpp
        newproduct.h
        newproduct.ui
        serverdriver.cpp
        serverdriver.h
        incpass.cpp
        incpass.ui
        incpass.h
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Bhitti
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET Bhitti APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(Bhitti SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(Bhitti
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(Bhitti PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(Bhitti PRIVATE cpr::cpr)

set_target_properties(Bhitti PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS Bhitti
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Bhitti)
endif()
