#include<vector>
#include<string>
#include"User.hpp"
class AuthManager{
    private:
    std::vector<User>users;
    User* findUser(const std::string&username);
    public:
    bool registerUser(const std::string& username,const std::string&password );
    
    bool login(const std::string &username,const std::string& password);

    bool logout(const std::string &username);

};