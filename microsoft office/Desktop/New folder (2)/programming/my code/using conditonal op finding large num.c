#include<stdio.h>
int main ()
{
    int a,b,large;
    printf("enter two number\n");
    scanf("%d%d",&a,&b);
    /*large=(a>b)? a:b;
    printf("large num is %d\n",large);
    return main();
    */ if (a>b)
        printf(" the large num is %d",a);
    else if (b>a)
        printf("the large num is %d",b);
    else printf("the num is equal");

}
