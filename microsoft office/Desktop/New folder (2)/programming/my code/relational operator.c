/*
<,<=  control statement:1)conditional statement 2) loop statement
       conditional statement:if else statement,switch statement
>,>=
==,!=
*/
#include<stdio.h>
int main()
{
    int num1;
    printf("enter an integer number:");
    scanf("%d",&num1);
    if(num1%2==0)
    printf("the number is even \n");
    //if(num1%2!=0)
    else
    printf("the number  is odd");

    return 0;
}
