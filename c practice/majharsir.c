#include<stdio.h>
int main ()
{
    int x,y;
    int temp;
    printf("enter two number please:\n");
    scanf(" %d%d",&x,&y);
    temp=x;
    x=y;
    y=temp;
    printf("x=%d\n",x);
    printf("y=%d\n",y);
}
