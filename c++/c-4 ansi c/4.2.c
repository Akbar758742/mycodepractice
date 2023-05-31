    #include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("press any key\n");
    ch=getchar();
    if(isalpha(ch)>0)
        printf("the character is letter");
    else if(isdigit(ch)>0)
    printf("the character is a digit");
    else
        printf("the character is not alplhanumeric");
}
