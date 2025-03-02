#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void login();
void registration();
void forgot();
void clearScreen();  // Function to clear the screen

int main()
{
    int c;

    while (true)
    {
        clearScreen();
        cout << "\t\t\t______________________________________________________\n\n\n";
        cout << "\t\t\t             Welcome to the Login Page                \n\n\n";
        cout << "\t\t\t_____________          Menu            _________________\n\n";
        cout << "\n\n";
        cout << "\t|  Press  1  to  Login                   |\n";
        cout << "\t|  Press  2  to  Register                |\n";
        cout << "\t|  Press  3  if you forget your password |\n";
        cout << "\t|  Press  4  to  Exit                    |\n";
        cout << "\n\t\t\t Please enter your choice: ";
        cin >> c;
        cout << endl;

        switch (c)
        {
        case 1:
            login();
            break;
        case 2:
            registration();
            break;
        case 3:
            forgot();
            break;
        case 4:
            cout << "\t\t\t Thank you !!! \n\n";
            return 0;
        default:
            cout << "\t\t\t Invalid choice! Please select a valid option. \n\n";
        }
    }
}

void login()
{
    string userId, password, id, pass;
    bool found = false;

    clearScreen();
    cout << "\t\t\t Please enter the username and password: " << endl;
    cout << "\t\t\t USERNAME: ";
    cin >> userId;
    cout << "\t\t\t PASSWORD: ";
    cin >> password;

    ifstream input("records.txt");

    while (input >> id >> pass)
    {
        if (id == userId && pass == password)
        {
            found = true;
            break;
        }
    }
    input.close();

    if (found)
    {
        cout << userId << "\n\t Your LOGIN is successful! \n\t Thanks for logging in! \n";
    }
    else
    {
        cout << "\t\t\t Sorry! Your LOGIN was unsuccessful. \n\t Please try again! \n";
    }

    system("pause");
}

void registration()
{
    string ruserId, rpassword;
    
    clearScreen();
    cout << "\t\t\t Enter the username: ";
    cin >> ruserId;
    cout << "\t\t\t Enter the password: ";
    cin >> rpassword;

    ofstream f1("records.txt", ios::app);
    f1 << ruserId << ' ' << rpassword << endl;
    f1.close();

    cout << "\t\t\t Your registration is successful! \n\t Thanks for registering! \n";

    system("pause");
}

void forgot()
{
    int option;
    
    clearScreen();
    cout << "\t\t\t Did you forget your username or password? \n";
    cout << "\t Press 1 to search for your password by username \n";
    cout << "\t Press 2 to go back to the main menu \n";
    cout << "\t\t\t Enter your choice: ";
    cin >> option;

    switch (option)
    {
    case 1:
    {
        string suserId, sId, spass;
        bool found = false;

        cout << "\n\t\t Enter the username you remember: ";
        cin >> suserId;

        ifstream f2("records.txt");
        while (f2 >> sId >> spass)
        {
            if (sId == suserId)
            {
                found = true;
                break;
            }
        }
        f2.close();

        if (found)
        {
            cout << "\n\n\t Your account was found! \n";
            cout << "\n\n\t Your password is: " << spass << endl;
        }
        else
        {
            cout << "\n\t Sorry! Your account was not found! \n";
        }

        system("pause");
        break;
    }
    case 2:
        return;
    default:
        cout << "\t\t\t Wrong choice! Please try again! \n";
        system("pause");
        forgot();
    }
}

// Function to clear screen (cross-platform)
void clearScreen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
