#ifndef SERVERDRIVER_H
#define SERVERDRIVER_H
#include<cpr/cpr.h>


class ServerDriver{
private:
    std::string serverURL;
public:
    ServerDriver(){
        serverURL = "http://192.168.18.74:6969";
    }

    std::string checkServerHealth(){
        cpr::Response r = cpr::Get(cpr::Url{serverURL+"/health"});
        std::string toReturn = r.text;
        return toReturn;
    }

    // LOGIN METHODS

    std::string login(std::string uname, std::string pass){
        std::string toSend = "{\"username\":\""+uname+"\",\"password\":"+"\""+pass+"\"}";
        cpr::Response r = cpr::Post(cpr::Url{serverURL+"/login"},
                                   cpr::Body{toSend});
        std::string toReturn = r.text;
        return toReturn;
    }

    // PRODUCT METHODS

    std::string getProductDetails(std::string productID){
        cpr::Response r = cpr::Get(cpr::Url{serverURL+"/product/"+productID});
        std::string toReturn = r.text;
        return toReturn;
    }//tested

    // ORDER METHODS

    std::string addOrder(std::string productID, std::string customer, std::string contact,
                            std::string address, std::string price){
        std::string toSend = "{\"product\":\""+productID+"\",\"customer\":\""+customer+"\",\"contact\":\""+contact+"\",\"address\":\""+address+"\",\"price\":\""+price+"\"}";;
        cpr::Response r = cpr::Post(cpr::Url{serverURL+"/orders"},
                                    cpr::Body{toSend});
        std::string toReturn = r.text;
        return toReturn;
    }

    std::string getOrderDetails(std::string orderID){
        cpr::Response r = cpr::Get(cpr::Url{serverURL+"/orders/"+orderID});
        std::string toReturn = r.text;
        return toReturn;
    }//tested

    std::string deleteOrders(std::string orderID){
        cpr::Response r = cpr::Delete(cpr::Url{serverURL+"/orders/"+orderID});
        std::string toReturn = r.text;
        return toReturn;
    }//tested

    // INVENTORY METHODS

    std::string getInventoryDetails(std::string inventoryID){
        cpr::Response r = cpr::Get(cpr::Url{serverURL+"/inventory/"+inventoryID});
        std::string toReturn = r.text;
        return toReturn;
    }//tested

    std::string addInventory(std::string name, std::string maxPrice, std::string minPrice,
                            std::string price, std::string stock){
        std::string toSend = "{\"name\":\""+name+"\",\"maxPrice\":\""+maxPrice+"\",\"minPrice\":\""+minPrice+"\",\"price\":\""+price+"\",\"stock\":\""+stock+"\"}";;;
        cpr::Response r = cpr::Post(cpr::Url{serverURL+"/add/inventory"},
                                    cpr::Body{toSend});
        std::string toReturn = r.text;
        return toReturn;
    }//tested

    std::string updateInventory(std::string inventoryID, std::string price, std::string quantity){
        std::string toSend = "{\"price\":\""+price+"\",\"quantity\":\""+quantity+"\"}";
        cpr::Response r = cpr::Post(cpr::Url{serverURL+"/inventory/"+inventoryID},
                                    cpr::Body{toSend});
        std::string toReturn = r.text;
        return toReturn;
    }//tested

    std::string deleteInventory(std::string inventoryID){
        cpr::Response r = cpr::Delete(cpr::Url{serverURL+"/inventory/"+inventoryID});
        std::string toReturn = r.text;
        return toReturn;
    }//tested

    // DISCOUNT METHODS
    std::string getDiscountCodes(){
        cpr::Response r = cpr::Get(cpr::Url{serverURL+"/discount"});
        std::string toReturn = r.text;
        return toReturn;
    }//tested

    std::string addDiscountCode(std::string code, std::string amount, std::string validity){
        std::string toSend = "{\"code\":\""+code+"\",\"amount\":\""+amount+"\",\"validity\":\""+validity+"\"}";
        cpr::Response r = cpr::Post(cpr::Url{serverURL+"/add/discount"},
                                    cpr::Body{toSend});
        std::string toReturn = r.text;
        return toReturn;
    }//tested

    std::string removeDiscountCode(std::string code){
        std::string toSend = "{\"code\":\""+code+"\"}";
        cpr::Response r = cpr::Delete(cpr::Url{serverURL+"/remove/discount"},
                                      cpr::Body{toSend});
        std::string toReturn = r.text;
        return toReturn;
    }//tested

    // SALES METHODS
    std::string getSalesData(){
        cpr::Response r = cpr::Get(cpr::Url{serverURL+"/sales"});
        std::string toReturn = r.text;
        return toReturn;
    }//tested

    // AGENDA METHODS
    std::string getAgendas(){
        cpr::Response r = cpr::Get(cpr::Url{serverURL+"/agenda"});
        std::string toReturn = r.text;
        return toReturn;
    }//tested

    std::string addAgenda(std::string agenda){
        std::string toSend = "{\"agenda\":\""+agenda+"\"}";
        cpr::Response r = cpr::Post(cpr::Url{serverURL+"/agenda"},
                                    cpr::Body{toSend});
        std::string toReturn = r.text;
        return toReturn;
    }//tested

    // ATTENDANCE METHODS
    std::string getAttendanceDetails(std::string employeeID){
        cpr::Response r = cpr::Get(cpr::Url{serverURL+"/attendance/"+employeeID});
        std::string toReturn = r.text;
        return toReturn;
    }//tested

    // EMPLOYEE METHODS
    std::string removeEmployee(std::string employeeID){
        std::string toSend = "{\"employeeID\":\""+employeeID+"\"}";
        cpr::Response r = cpr::Delete(cpr::Url{serverURL+"/remove/employee"},
                                      cpr::Body{toSend});
        std::string toReturn = r.text;
        return toReturn;
    }//tested

    std::string addEmployee(std::string name, std::string post, std::string role,
                            std::string username, std::string password){
        std::string toSend = "{\"name\":\""+name+"\",\"post\":\""+post+"\",\"role\":\""+role+"\",\"username\":\""+username+"\",\"password\":\""+password+"\"}";;
        cpr::Response r = cpr::Post(cpr::Url{serverURL+"/add/employee"},
                                    cpr::Body{toSend});
        std::string toReturn = r.text;
        return toReturn;
    }//tested
};

#endif // SERVERDRIVER_H
