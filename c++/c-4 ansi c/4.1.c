#include<stdio.h>
int main()
{
    char ans;
    printf("would you like to know my name?\n");
    printf("type y for yes and N for no:");
    ans=getchar();
    if(ans=='y'||ans=='Y')
    {
        printf("my name is BUSY BEE\n");
    }
    else
        printf("\n\n you are good for nothing\n");
}
