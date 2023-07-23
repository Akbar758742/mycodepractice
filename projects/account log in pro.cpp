#include <iostream>
#include <string>
using namespace std;

int main(){
    system("color 3f");
    cout<< "Feel free to create your unique username and password to access our exclusive services and personalized experiences.\n";
    cout<< "Your security is our utmost priority."<<endl<<endl;
    string username ;
    string password ;
    cout<< "Enter your username:";
    getline(cin,username);
    cout<< "Enter your password:";
    getline(cin,password);
    cout<< "Account created!";

    string user;
    string pass;
    cout << "\n\nHello, Welcome to the App Login!" <<endl;
    cout << "Enter Your username: ";
    cin >> user;
    if (user == username){
        cout << "Enter password: " << endl;
        cin >> pass;
        if (pass == password){
            cout << "Successful Login!" << endl;
        }
        else {
            cout << "Incorrect Password!" << endl;
        }
    }
    else {
        cout << "Incorrect Username!" << endl;
    }
}
