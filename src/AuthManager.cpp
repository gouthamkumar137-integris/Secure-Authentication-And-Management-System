#include "AuthManager.hpp"
#include <iostream>

bool AuthManager::registerUser(const std::string& username,const std::string&password){
    if(users.find(username)!=users.end())
     return false;
    
    users.emplace(username,User(username,password));
    activitylogs.emplace_back(username+ "registerd");
     return true;
}

bool AuthManager::login(const std::string&username,const std::string &password){
   auto it =users.find(username);
   if(it==users.end())
   return false;
    
    if(!it->second.VerifyCredentials(username,password)){
        loginattempts[username]++;
        activitylogs.emplace_back(username+"Login Failed");
        return false;
    }
   
   it->second.SetLoginStatus(true);
   loginattempts[username]=0;
   activitylogs.emplace_back(username+"login Succeded");
   return true;
    
}

bool AuthManager::logout(const std::string &username){
    auto it=users.find(username);
    if(it==users.end())
    return false;

    it->second.SetLoginStatus(false);
    return true;
}


