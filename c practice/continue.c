#include<stdio.h>
int main()
{
    int y=20;
    while(y>4)
    {
        y=y/5;
        if(y==4)
        {
            continue;
        }
        printf("%d",y);
    }
}
