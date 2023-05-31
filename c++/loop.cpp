#include<bits/stdc++.h>
using namespace std;
int linearsearch(int arr[],int n,int loc)

{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==loc)
            return i;
    }
    return -1;
}

int main()
{
int n;
cout<< "enter how many number you want to compare:";
cin>>n;
int arr[n];

for(int i=0;i<n;i++)
{
    cin>> arr[i];
}
int loc;
cin>>loc;

cout<< "your desire values location is :" <<linearsearch(arr,n,loc);
return 0;
}
