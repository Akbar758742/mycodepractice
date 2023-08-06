#include <iostream>
#include <string>
using namespace std;

bool isStrongPassword(const string& password) {
    // Check minimum length
    if (password.length() < 8) {
        return false;
    }

    // Check for uppercase, lowercase, digit, and special character
    bool hasUppercase = false;
    bool hasLowercase = false;
    bool hasDigit = false;
    bool hasSpecialChar = false;

    for (char c : password) {
        if (isupper(c)) {
            hasUppercase = true;
        } else if (islower(c)) {
            hasLowercase = true;
        } else if (isdigit(c)) {
            hasDigit = true;
        } else if (ispunct(c) || c == ' ') {
            hasSpecialChar = true;
        }
    }

    return hasUppercase && hasLowercase && hasDigit && hasSpecialChar;
}

int main()
{
    cout << "Feel free to create your unique username and password to access our exclusive services and personalized experiences.\n";
    cout << "Your security is our utmost priority." << endl << endl;

    string username;
    string password;
    cout << "Enter your username:";
    getline(cin, username);

    do {
        cout << "Enter your password:";
        getline(cin, password);
        if (!isStrongPassword(password)) {
            cout << "Password is not strong enough. Please try again." << endl;
        }
    } while (!isStrongPassword(password));

    cout << "Account created!" << endl;

    string user;
    string pass;
    cout << "\n\nHello, Welcome to the App Login!" << endl;
    cout << "Enter Your username: ";
    cin >> user;
    if (user == username)
    {
        cout << "Enter password: ";
        cin >> pass;
        if (pass == password)
        {
            cout << "Successful Login!" << endl;
        }
        else
        {
            cout << "Incorrect Password!" << endl;
        }
    }
    else
    {
        cout << "Incorrect Username!" << endl;
    }

    return 0;
}
