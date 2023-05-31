#include<stdio.h>
int main()
{
    int a,b,c,x,y,z;
    int p,q,r;
    printf("enter three interger numbers\n");
    scanf("%d %*d %d",&a,&b,&c);
    printf("%d %d %d\n\n",a,b,c);
    printf("enter two 4-digit nymber\n");
    scanf("%2d%4d",&x,&y);
    printf("%d%d\n\n",x,y);
    printf("enter two integers\n");
    scanf("%d%d",&a,&x);
    printf("%d%d\n\n",a,x);
    printf("enter a nine digit number\n");
    scanf("%3d %4d %3d",&p,&q,&r);
    printf("%d %d %d\n\n",p,q,r);
    printf("enter two three digit numbers\n");
    scanf("%d%d",&x,&y);
    printf("%d%d",x,y);
}
