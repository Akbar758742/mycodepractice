#include<stdio.h>
int main()
{
    int n,fibo,first=0,count=0,second=1;
    printf("enter range:");
    scanf("%d",&n);
    while(count<n)
    {
        if(count<=1)
        {
            fibo=count;

        }
        else
        {
            fibo=first+second;
            first=second;
            second=fibo;
        }
        printf("%d\n",fibo);
        count++;
    }
}
