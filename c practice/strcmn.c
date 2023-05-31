#include<stdio.h>
int main()
{
    char str1[]="akbar vai";
    char str2[]="hi ";
    int d=strcmp(str1,str2);
     if(d==0)
     {
         printf("the strs are equal");
     }
     else
        printf("the strs are not eaual");
}
