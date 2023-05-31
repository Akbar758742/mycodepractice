#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin >>n;
    cout << "enter number of students"<<endl;
    int students[n];
    ///input
    for(int i=0; i<n; i++)
    {
        cout << "marks for student "<<i+1<< " = ";
        cin>>students[i];
        sum=sum+students[i];
    }
    cout << "total marks is:"<<sum<<endl;
    float avg=float(sum)/n;
    cout<< "avarage is:"<<avg<<endl;
    ///maximun and minimum
    int max=students[0];
    int min=students[0];
    for(int i=1; i<n; i++)
    {
        if(max>students[i]);
        {
            max=students[i];
        }
        if(min<students[i]);
        {
            max=students[i];
        }
    }
    cout<< "maximun is="<<max<<endl;
    cout<< "minimun is="<<min<<endl;
    getch();

}

