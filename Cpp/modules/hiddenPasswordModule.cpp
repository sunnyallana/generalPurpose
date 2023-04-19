#include <iostream>
#include <string>
#include <conio.h> 

using namespace std;

int main()
{
    string username, password;
    int attempts = 0;

  
    cout << "Please enter your username: ";
    cin >> username;

    cout << "Please enter your password: ";
    char ch = _getch();
    while (ch != '\r') 
    {
        if (ch != '\b') 
        {
            password.push_back(ch);
            cout << "*";
        }
        else if (!password.empty()) 
        {
            password.pop_back(); 
            cout << "\b \b"; 
        }
        ch = _getch();
    }
    cout << endl;


    while (attempts < 2)
    {
        if (username == "admin" && password == "123")
        {
            cout << "Login successful!" << endl;
            break;
        }
        else
        {
            cout << "Incorrect username or password. Please try again." << endl;
            cout << "Please enter your username: ";
            cin >> username;

            password.clear(); 

            cout << "Please enter your password: ";
            ch = _getch();
            while (ch != 'r') 
            {
                if (ch != '\b') 
                {
                    password.push_back(ch);
                    cout << "*";
                }
                else if (!password.empty())
                {
                    password.pop_back(); 
                    cout << "\b \b"; 
                }
                ch = _getch();
            }
            cout << endl;

            attempts++;
        }
    }

    if (attempts == 2)
    {
        cout << "Too many attempts. Login failed." << endl;
    }

    return 0;
}

