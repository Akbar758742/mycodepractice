
#include<stdio.h>
int main ()
{
    char lower,upper;
    printf("Enter a lowercase letter:");
    scanf("%c",&lower);
    upper=toupper(lower);
    printf("the uppercase is:%c",upper);
}
