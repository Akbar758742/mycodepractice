#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,x,i;
   cin>>n;
   while(n)
   {
       for(i=2;i<x;i++)
       {
           if(x%i==0)
            break;

       }

       if(i==x)
       {cout<<" "<<x;

       }

       x++;
        n--;
   }
return 0;
}

