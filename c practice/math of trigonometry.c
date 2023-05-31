#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    scanf("%lf",&x);
    double result = sin(x);
    printf("result of sin(%.2lf)=%.2lf\n",x,result);
}
