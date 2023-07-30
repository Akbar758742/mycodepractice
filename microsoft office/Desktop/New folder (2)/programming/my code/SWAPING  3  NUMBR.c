#include<stdio.h>
int main ()
{
    int w,x,y,z,temp;
    printf("enter value for above variable \n");
    scanf("%d%d%d%d",&w,&x,&y,&z);
    temp=w;
    w=x;
    x=y;
    y=z;
    z=temp;
    printf("w= %d\n",w);
    printf("x = %d\n",x);
    printf("y=%d\n",y);
    printf("z=%d\n",z);

}
