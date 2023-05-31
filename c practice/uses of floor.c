#include<stdio.h>
int main ()
{
    double x;
    scanf("%lf",&x);
    double result = floor(x);
    printf("the result of floor(%lf) = %lf\n",x,result);
}
