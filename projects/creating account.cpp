#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<< "hello,welcome to the app"<<endl;
    cout<< "create a account"<<endl;
    cout<< "choose username:";
    string user;
     cin>>user;
    cout<< "choose password:";
    string pass;
    cin>>pass;
    cout<< "account created!"<<endl;
    cout<< "please enter your information"<<endl;
    cout<< "username:";
    string username;
    cin>>username;
    cout<< "password:";
    string password;
   cin>>password;
    while((user!=username)&&(pass!=password))
    {
        cout<< "wrong username or password please try again"<<endl;
        cout<< "username:";
       cin>>username;
        cout<< "password:";
        cin>>password;
    }
    cout<< "welcome to the app";


}
