#include<stdio.h>
int main()
{
    int m=12;
    while(m--)
    {
        printf("%d.yes\n",m);
    }
    printf("%d",m);//here loop will terminate for 0,but for post decrement 1more will minus thus the valu of m will -1
}
