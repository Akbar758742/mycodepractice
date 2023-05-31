#include<stdio.h>
int main()
{
    char ch;
    printf("enter a letter:");
    scanf("%c",&ch);
    if((ch>='A')&& (ch<='Z'))
        printf("it is a capital letter");
    else if ((ch>='a') && (ch<='z'))
        printf("it is a small letter");
    else
        printf("your input is invalid");
    return 0;
}
