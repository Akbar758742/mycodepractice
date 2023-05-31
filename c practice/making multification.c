#include<stdio.h>
int main()
{
    while (1)
    {
        int i=1;
        int x;
        printf("enter a number:");
        scanf("%d",&x);
        for (i=1; i<=10; i++)
        {
            printf("%d x %d = %d\n",x,i,x*i);
        }
    }
        return main();

}
