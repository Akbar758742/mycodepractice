#include<stdio.h>
int main()
{
    char a[100002],b[100002];
    int len1,len2;
    scanf("%s %s",a,b);
    len1=strlen(a);
    len2=strlen(b);
    sort(a,a+len1);
    sort(b,b+len2);
    if(strcmp(a,b)==0)
        printf("YES");
    else
        printf("NO");

}

