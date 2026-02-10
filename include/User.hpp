#include<string>
#ifndef USER_HPP
#define USER_HPP
class User{
    private:
    std::string Username;
    std::string Password;
    bool is_loggedIn;

    public:

    User(const std::string&Username,const std::string &Password)
    :Username(Username),Password(Password),is_loggedIn(false){}

    bool VerifyCredentials(const std::string&uname,const std::string &upassword)const{
        return(uname==Username&&upassword==Password);
    }

    std::string getUsername() const{
        return(Username);
    }

    bool isloggedIn() const{
        return(is_loggedIn);
    }

    void SetLoginStatus(bool status){
        is_loggedIn=status;
    }

};
#endif