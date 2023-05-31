#include<iostream>
using namespace std;
int main()
{
    int num=2,num2=3;
    int *p1,*p2;
    p1=&num;
    p2=&num2;
    cout<<*p1<<endl;
    cout<<*p2<<endl;
    int sum=*p1+*p2;
    cout <<sum;
}
