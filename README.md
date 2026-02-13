# 🔐 Secure Authentication & Password Management System (C++)

A secure and modular authentication system built in **C++** using modern programming practices. This project demonstrates user registration, login verification, login attempt tracking, and secure session handling.

Designed with a professional folder structure suitable for real-world backend systems.

---

# 📁 Project Structure

```
SecureAuthenticationAndManagementSystem/
│
├── src/
│   ├── main.cpp
│   ├── User.cpp
│   └── AuthManager.cpp
│
├── include/
│   ├── User.hpp
│   └── AuthManager.hpp
│
├── bin/
│   └── app.exe   (generated after compilation)
│
└── README.md
```

---

# ⚙️ Requirements

You must install:

* MSYS2
* GCC (MinGW-w64)
* Git (optional)

---

# 🛠️ Setup MSYS2 (One-time setup)

Open **MSYS2 MinGW64 terminal** and run:

```bash
pacman -S mingw-w64-x86_64-gcc
```

Check installation:

```bash
g++ --version
```

---

# ▶️ How to Compile and Run (MSYS2 MinGW64 Terminal)

## Step 1 — Navigate to project folder

Example:

```bash
cd /d/SecureAuthenticationAndManagementSystem
```

---

## Step 2 — Compile the project

```bash
g++ src/main.cpp src/User.cpp src/AuthManager.cpp -Iinclude -o bin/app.exe
```

Explanation:

* `src/*.cpp` → source files
* `-Iinclude` → header files folder
* `-o bin/app.exe` → output executable

---

## Step 3 — Run the program

```bash
./bin/app.exe
```

---

# 💻 How to Run from Normal Windows Terminal (optional)

Navigate to project folder:

```bash
cd SecureAuthenticationAndManagementSystem
```

Compile:

```bash
g++ src/main.cpp src/User.cpp src/AuthManager.cpp -Iinclude -o bin/app.exe
```

Run:

```bash
bin\app.exe
```

---

# ✨ Features

* User registration
* Secure login system
* Credential verification
* Login attempt tracking
* Account lock protection (planned)
* Modular architecture
* Clean separation of header and source files
* Professional folder structure

---

# 🔐 Security Features

* Encapsulated user data
* Login attempt monitoring
* Pointer-safe user lookup
* Extendable for hashing and database integration

---

# 🧠 Concepts Demonstrated

* Object Oriented Programming (OOP)
* Classes and Encapsulation
* Header guards
* STL containers (`vector`, `unordered_map`)
* Iterators
* Pointers and references
* Modular project structure
* Authentication logic design

---

# 🚀 Future Improvements

* Password hashing
* Database integration (MySQL)
* Admin panel
* Account lock after multiple failed attempts
* File-based or database logging
* Role-based access control

---

# 📌 Author

Gowtham

---

# 📜 License

This project is for educational and portfolio purposes.
