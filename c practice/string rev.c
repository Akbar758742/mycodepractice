#include<stdio.h>
int main()
{
    char a[100]="akbar vai";
    char b[100];
    int i=0,len1=0;
    while(a[i]!='\0')
    {
        i++;
        len1++;
    }
    printf("string length is %d\n",len1);
    int j;
    for(j=0,i=len1-1;i>=0;i--,j++)
    {
        b[j]=a[i];
    }
    b[j]='\0';
    printf("%s\n",a);
    printf("%s\n",b);

}
