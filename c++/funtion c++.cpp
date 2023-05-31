#include<iostream>
#include<conio.h>
using namespace std;
void add(float,float);
void sub(float,float);
void mul(float,float);
void divi(float,float);

int main()
{
    add(8,2);
    sub(8,2);
    mul(8,2);
    divi(8,2);
}
void add(float a,float b)
{
    float sum=a+b;
    cout<<"sum is ="<<sum<<endl;
}
void sub(float a,float b)
{
    float sub=a-b;
    cout<< "sub is="<<sub<<endl;
}
void mul(float a,float b)
{
    float mul=a*b;
    cout<< "mul is ="<<mul<<endl;
}
void divi(float a,float b)
{
    float divi=a/b;
    cout<< "div is ="<<divi<<endl;
}
