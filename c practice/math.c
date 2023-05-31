#include<stdio.h>
int main ()
{
    double x;
    scanf("%lf",&x);
    double result= log10(x);
    printf("result of log10(%lf)=%lf\n",x,result);

}
