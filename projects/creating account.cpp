#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<< "hello,welcome to the app"<<endl;
    cout<< "create a account"<<endl;
    cout<< "choose username:";
    string user;
    getline(cin,user);
    cout<< "choose password:";
    string pass;
    getline(cin,pass);
    cout<< "account created!"<<endl;
    cout<< "please enter your information"<<endl;
    cout<< "username:";
    string username;
    getline(cin,username);
    cout<< "password:";
    string password;
    getline(cin,password);
    while(user!=username&&pass!=password)
    {
        cout<< "wrong username or password please try again"<<endl;
        cout<< "username:";
        getline(cin,username);
        cout<< "password:";
        getline(cin,password);
    }
    cout<< "welcome to the app";


}
