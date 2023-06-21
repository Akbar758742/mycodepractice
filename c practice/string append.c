#include<stdio.h>
#include<string.h>
int main()
{
    char str[6]="CSE";
    char ch='S';
    printf("orginal string:%s\n",str);
    printf("character to be appended:%c\n",ch);
    //append ch to char
    strncat(str,&ch,1);
    printf("appended string:%s",str);
}
