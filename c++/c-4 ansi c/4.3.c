#include<stdio.h>
#include<ctype.h>
int main()
{
    char alphabet;
    printf("enter and alphabet");
    putchar('\n');
    alphabet=getchar();
    if(islower(alphabet))
        putchar(toupper(alphabet));
    else
        putchar(tolower(alphabet));
}
