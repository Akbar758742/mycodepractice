#include<bits/stdc++.h>

using namespace std;
int main()
{
 int n,k,ld;
 scanf("%d%d",&n,&k);
 while(k--)
 {
  ld=n%10;
  if(ld>0)
  {
      n=n-1;
  }
  else
  {
      n=n/10;
  }
 }
 printf("%d",n);
}
