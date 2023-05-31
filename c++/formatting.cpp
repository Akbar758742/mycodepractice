#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
    float a,b;
    cout<< "enter two intergers"<<endl;
    cin >>a>>b;
    cout << showpoint;
    cout << fixed;
    cout << setprecision(2);

    float sum=a+b;
    cout <<setw(20)<< "sum is:"<<sum <<endl;
    float sub=a-b;
    cout  <<setw(20)<< "sub is:"<<sub<<endl;
    float mul=a*b;
    cout <<setw(20) << "mul is:"<<mul<<endl;
    float div=(float)a/b;
    cout <<setw(20) << "div is :"<<div<<endl;

}

