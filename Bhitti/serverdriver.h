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

};

#endif // SERVERDRIVER_H
