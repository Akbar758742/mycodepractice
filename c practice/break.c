#include<stdio.h>
int main ()
{ int x=4;
    while(x<50)
    {
        x=x*2;
        if(x==16)
        {
            break;
        }
        printf("%d",x);
    }
}
