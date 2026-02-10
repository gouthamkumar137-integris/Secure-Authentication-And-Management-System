#include<iostream>
#include<string>
#include "../include/User.hpp"
#include "../include/AuthManager.hpp"

int main(){
    AuthManager auth;
    int choice;
    std::string username;
    std::string password;
    do{
    std::cout<<"***** User Authentication Management System ******\n";
    std::cout<<" 1.Register\n 2.Login\n 3.Logout\n 4.Exit\n";
    std::cout<<"Enter Your Choice :";
    std::cin>>choice;
    
    switch(choice){
        case 1:
        std::cout<<"Username :";
        std::cin>>username;
        std::cout<<"Password :";
        std::cin>>password;
        
        if(auth.registerUser(username,password))
            std::cout<<"Registeration Successfull.\n";
        
            else
            throw std::runtime_error("Username Already Exists.\n");
        
        break;

        case 2:
        std::cout<<"Username: ";
        std::cin>>username;
        std::cout<<"Password: ";
        std::cin>>password;

        if(auth.login(username,password))
        std::cout<<"Login Successfull.\n";
        else
        throw std::runtime_error("Invlid Credential.\n");
        break;

        case 3:
        std::cout<<"Username: ";
        std::cin>>username;

        if(auth.logout(username))
        std::cout<<"Logged Out Succesfully.\n";
        else
        throw std::runtime_error("Unexpected Problem Occurs,User Not Found !!!\n");
        break;

        case 4: 
        std::cout<<"Exiting....\n";
        break;

        default:
        throw 
        std::invalid_argument("Invalid Choice, Please Recheck \n");
    }

    }while(choice!=4);
    return 0;}