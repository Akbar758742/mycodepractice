#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,sum=0;
    cin>>t;
    while(t--)
    {

        cin>>n;
        for(i=0; i<n; i++)
        {
            if((i%5==0)||(i%3==0))
            {
                sum+=i;

            }
        }
        cout<<sum<<endl;
    }

    return 0;
}

