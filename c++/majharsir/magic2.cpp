#include<bits/stdc++.h>
using namespace std;
int isMagicNumber(int num)
{
    while(num!=0)
    {
        if(num%1000==144)
        {
            num/=1000;
        }
        else if(num%100==14)
        {
            num/=100;
        }
        else if(num%10==1)
        {
            num/=10;
        }
        else
        {
            return 0;
        }

    }
    return 1;
}
int main()

{
    int num;
    cin >> num;
    if(isMagicNumber(num))
    {
        cout<<"YES"<<endl;
    }
    else
    {
          cout<<"NO"<<endl;
    }

    return 0;
}
