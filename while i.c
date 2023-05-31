
#include<stdio.h>//problem i should have a break statement otherwise the loop will be continuing
int main ()
{
    int x=5,y=50;
    while(x<=y)
    {
        x=y/x;
        printf("%d\n",x);
        break;

    }

}
