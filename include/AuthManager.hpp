
#include<vector>
#include<string>
#include<unordered_map>
#include"User.hpp"
class AuthManager{
    private:
    std::unordered_map<std::string,User>users;
    std::unordered_map<std::string,int>loginattempts;
    std::vector<std::string>activitylogs;
    
    public:
    bool registerUser(const std::string& username,const std::string&password );
    
    bool login(const std::string &username,const std::string& password);

    bool logout(const std::string &username);
    

};

