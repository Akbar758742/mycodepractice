#include<stdio.h>
int main ()
{
    int x=5,y=50;
    while(x<=y)
    {
        printf("%d\n",x);
        x=y/x;
        printf("%d",x);
        break;

    }

}
