#include<stdio.h>
int main()
{
    char char1,char2;
    printf("enter char1 and char2:\n");
    scanf("%c %c",&char1,&char2);
    if(char1>char2)
    {
        printf("char1 is bigger");
    }
    else
    {
        printf("char1 is smaller");
    }
    return 0;
}
