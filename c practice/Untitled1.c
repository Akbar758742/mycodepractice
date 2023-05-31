#include<stdio.h>
int main()
{
    char ch;
    char a[50];
    char b[50];
    scanf("%c ",&ch);

    scanf("%s ",&a);

    gets(b);
    printf("%c\n%s\n%s",ch,a,b);
    return 0;
}
