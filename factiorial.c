

#include<stdio.h>
int main()
{
    system("color e");
    while(1)
    {

        int i,n,fact=1;
        printf("enter a positive number:");
        scanf("%d",&n);
        for (i=1; i<=n; i++)
        {
            fact=fact*i;

        }
        printf("%d\n",fact);


    }
    return 0;
}
