

#include<stdio.h>
int main()
{ int n,i,b,sum=0;
scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
 scanf("%d",&a[i]);
 sum=sum+a[i];

    }
     if (sum>=1)
 printf("HARD");
 else
 printf("EASY");

    return 0;
}
