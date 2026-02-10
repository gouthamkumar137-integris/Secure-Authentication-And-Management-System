#include "../include/AuthManager.hpp"
User* AuthManager::findUser(const std::string& username){
    for(auto&user:users){
        if(user.getUsername()==username){
            return &user;
        }
    }
    return nullptr;
}

bool AuthManager::registerUser(const std::string& username,const std::string&password){
    if(findUser(username)!=nullptr)
     return false;
    
     users.emplace_back(username,password);
     return true;
}

bool AuthManager::login(const std::string&username,const std::string &password){
    User* user=findUser(username);
    
    if(user==nullptr)
    return false;

    if(!user->VerifyCredentials(username,password)){
        return false;
    }
   
   user->SetLoginStatus(true);
   
   return true;
    
}

bool AuthManager::logout(const std::string &username){
    User* user=findUser(username);

    if(user==nullptr)
    return false;

    user->SetLoginStatus(false);
    return true;
}