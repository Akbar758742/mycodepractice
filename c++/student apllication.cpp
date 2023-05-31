#include<iostream>
using namespace std;
#include<conio.h>
int main()

{
    int n,i,sum=0;
    cin >>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cout << "marks for student "<<i+1<< " = ";
        cin>>a[i];
        sum=sum+a[i];
    }
    cout << "total marks is:"<<sum<<endl;
    float avg=float(sum)/n;
    cout<< "avarage is:"<<avg<<endl;
    int max,min;
    max=a[0];
    min=a[0];
    for(i=1; i<n; i++)
    {
        if      (max<a[i]);
        {
            max=a[i];
        }
        if(min>a[i]);
        {
            min=a[i];
        }
    }
    cout<< "maximun is="<<max<<endl<< "minimun is="<<min;
    getch();

}
