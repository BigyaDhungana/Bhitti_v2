#ifndef SERVERDRIVER_H
#define SERVERDRIVER_H
#include<cpr/cpr.h>
//JSON Includes
#include<QJsonDocument>
#include<QJsonParseError>
#include<QJsonObject>
#include<QJsonValue>
#include<QJsonArray>

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

    std::string login(std::string uname, std::string pass){
        std::string toSend = "{\"username\":\""+uname+"\",\"password\":"+"\""+pass+"\"}";
        cpr::Response r = cpr::Post(cpr::Url{serverURL+"/login"},
                                   cpr::Body{toSend});
        std::string toReturn = r.text;
        return toReturn;
    }

};

#endif // SERVERDRIVER_H
