Login Registration System
A simple Login & Registration System built in C++ that allows users to:

Register with a username and password
Login using registered credentials
Retrieve forgotten passwords
Exit the application

📌 Features
✅ User-friendly CLI interface
✅ Stores credentials in a file (records.txt)
✅ Allows users to retrieve forgotten passwords
✅ Cross-platform support (Windows, Linux, macOS)
✅ Uses file handling for storing user data

🛠 Installation & Setup
1️⃣ Clone this repository (or create a new .cpp file and copy the code).

sh

git clone https://github.com/your-username/login-system.git
cd login-system

2️⃣ Compile the code using a C++ compiler:

sh

g++ -o login_system main.cpp

3️⃣ Run the executable:

sh

./login_system  # For Linux/macOS
login_system.exe  # For Windows

🚀 Usage
Run the program and choose an option:


|  Press  1  to  Login                   |
|  Press  2  to  Register                |
|  Press  3  if you forget your password |
|  Press  4  to  Exit                    |

Register by entering a username and password.
Login with the same credentials.
Retrieve a forgotten password by entering your username.
Exit the program when done.

🛠 Technologies Used
C++
File Handling (fstream)
Basic Input/Output (cin & cout)

📌 Future Improvements
🔹 Encrypt passwords for better security
🔹 Implement a database instead of a text file
🔹 Add multi-user support with roles (admin, user)
🔹 Improve UI with a graphical interface

📜 License
This project is free to use. Feel free to modify and improve it! 🚀

🤝 Contributing
Have suggestions? Feel free to fork this repo and submit a pull request! 🎉
