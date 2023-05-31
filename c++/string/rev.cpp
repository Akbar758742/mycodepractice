#include<bits/stdc++.h>
using namespace std;

int main()
{
 string str;
 getline(cin,str);
 string a=str;
 str=string(str.rbegin(),str.rend());
 if(a==str)
 {
     cout<< "yes this is palindrome"<<endl;

 }
 else
 {
     cout<< "no this is not palindrome"<<endl;
 }
 cout<< "your reverse string is :"<<str<<endl;

return 0;
}

