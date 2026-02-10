# Secure Authentication & Password Management System (C++)

A beginner-to-intermediate level C++ project that demonstrates a clean and secure
authentication architecture using Object-Oriented Programming principles.

This project is designed with future scalability and security in mind.

----------------------------------------------

## 🚀 Features

- User Registration
- User Login & Logout
- Centralized Authentication Manager
- Encapsulation of sensitive data
- Clear separation of responsibilities

----------------------------------------------

## 🧠 Concepts Used

- C++ OOP (Classes, Encapsulation)
- Header & Source File Separation
- STL (`std::vector`, `std::string`)
- Pointers & References.
- Error Handling(`throw std::runtime_error`,`throw std::invalid_argument`)
- Basic Security-Oriented Design

----------------------------------------------

## 📁 Project Structure

SecureAuthenticationAndManagementSystem/
├── src/
│   ├── main.cpp
│   ├── User.cpp
│   └── AuthManager.cpp
├── include/
│   ├── User.hpp
│   └── AuthManager.hpp
├── bin/
├── README.md

----------------------------------------------

## 🛠️ How to Compile (MSYS2 / MinGW)

```bash
g++ src/main.cpp src/User.cpp src/AuthManager.cpp -Iinclude -o bin/auth

## How to Run 
```bash
  ./bin/auth
