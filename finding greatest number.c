#include<stdio.h>
int main()// finding greatest numbr using control statement
{
    int x,y,z,q;
    printf("enter value of x y z q\n");
    scanf("%d%d%d%d",&x,&y,&z,&q);
    if(x>y && x>z&& x>q )
        printf(" largest number is %d",x);
    else if (y>x && y>z && y>q)
        printf("largest number is %d",y);
    else if (z>x && z>y && z>q)
        printf("largest number is %d",z);
    else if (q>x && q>y && q>z)
        printf("largest number is %d",q);
    else
        printf("the number is equal ");
    return 0;

}
