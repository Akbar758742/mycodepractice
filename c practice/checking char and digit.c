#include<stdio.h>
int main()
{

        char char1;
        printf("Enter a character:");
        scanf("%c",&char1);
        if(char1>='a' && char1<='z' || char1>='A' && char1<='Z')
        {
            printf("\n%c is a letter\n",char1);
        }
        else if(char1>='0' && char1<='9')
        {
            printf("\n%c is a digit\n",char1);

        }
        else
            printf("\nyour input is invalid\n");


    return 0;
}
