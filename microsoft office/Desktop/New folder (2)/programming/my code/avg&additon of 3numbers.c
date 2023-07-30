#include<stdio.h>
int main ()
{
    int num1,num2,num3,sum;
    float avg;
    printf("Enter three numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);
    sum=num1+num2+num3;
    printf("the sum is=%d\n",sum);
    avg=sum/(float)3;
    printf("the avg is=%.3f",avg);
}
