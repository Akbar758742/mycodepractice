#include<stdio.h>
int main ()
{
    double x;
    scanf("%lf",&x);

    double result= trunc(x);
    printf("the result of trunc(%lf)=%lf\n",x,result);

}
