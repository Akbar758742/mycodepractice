#include<stdio.h>
#include<math.h>
int main ()
{
    double x,y,result;
    printf("enter value of x and y:\n");
    scanf("%lf%lf",&x,&y);
    result=pow(x,y);
    printf("the result of giver value is:%lf",result);
}
