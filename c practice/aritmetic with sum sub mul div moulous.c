//write program that refers to sum,sub,mul,div,mod of two integer
#include<stdio.h>
int main()
{
    int num1,num2,result;
    printf("enter two number:");
    scanf("%d %d",&num1,&num2);

    result= num1+num2;
    printf("the sum is =%d\n",result);

    result=num1-num2;
    printf("the sub is=%d\n",result);

    result=num1*num2;
    printf("the mul is =%d\n",result);
    result=num1/num2;
    printf("the div is = %d\n",result);
    result=num1%num2;
    printf("the remainder is=%d\n",result);
    return 0;









}
