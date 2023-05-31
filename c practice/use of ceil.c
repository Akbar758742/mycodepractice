 #include<stdio.h>
int main ()// here ceil mean the rising  number of previous number
{
    double x;
    scanf("%lf",&x);

    double result= ceil(x);
    printf("the result of ceil(%lf) is =%lf\n",x,result);
}
