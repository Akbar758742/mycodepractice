#include<stdio.h>
int main ()
{
    char ch;
    printf("enter an alphabet \n");
    scanf("%c",&ch);
    if (ch>='a'&& ch<='z')
        printf("the letter %c is small letter",ch);
    else if (ch>='A' && ch <='Z')
        printf("the  letter %c is capital letter",ch);
    else
        printf("the entered input is not letter");
}
