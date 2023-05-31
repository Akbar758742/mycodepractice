#include<stdio.h>
int main()
{
    int a[5]={10,30,33,44,44};
    int *p,i;

    p=&a[0];
    for(i=0;i<5;i++)
    {
        printf("%d\n",*p);
        p++;
    }

}
