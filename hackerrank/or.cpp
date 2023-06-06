#include<bits/stdc++.h>
using namespace std;
int mul()
{ int n,i,sum=0;
     cin>>n;
        for(i=0; i<n; i++)
        {
            if((i%5==0)||(i%3==0))
            {
                sum=sum+i;
            }
        }
        return sum;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cout<<mul()<<endl;
    }
    return 0;
}



