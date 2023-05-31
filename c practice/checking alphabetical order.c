#include<stdio.h>
int main ()



{

    char char1,char2;
    printf("Enter two alphabet:");
    scanf("%c %c",&char1,&char2);
    if(char1>char2)
    {
        printf("between both alphabet(%c %c)  char1 %c is bigger and char2 %c is smaller\n",char1,char2,char1,char2);
    }
    else
        printf("between both alphabet(%c%c)char2 %c is smaller and char1  %c is bigger",char2,char1,char2,char1);


    return 0 ;

}
