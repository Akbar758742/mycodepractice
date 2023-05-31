#include<stdio.h>
int main ()
{
    double num1,num2;
    char op;
    printf("enter an operator (+,-,*,/): ");
    scanf("%c",&op);
    printf("enter two numbers:");
    scanf("%lf%lf",&num1,&num2);
    switch (op)
    {
    case '+':
    {
        printf(" %.2lf+ %.2lf= %.2lf\n",num1,num2,num1+num2);
        break;
    }
    case '-':
    {
        printf("  %.2lf-%.2lf = %.2lf\n",num1,num2,num1-num2);
        break;
    }
    case '*':
    {
        printf(" %.2lf*%.2lf = %.2f\n",num1,num2,num1*num2);
        break;
    }
    case '/':
    {
        printf(" %.2lf/%.2lf = %.2f\n",num1,num2,num1/num2);
        break;
    }
    default:
        printf("invalid input\n:");

    }
    return 0;

}
