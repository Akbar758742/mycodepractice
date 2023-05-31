#include<stdio.h>
int main()
{
    FILE *file;
    char name[200]="mohammed akbar hossen";
    int l,i;
    l=strlen(name);
    file=fopen("test.txt", "w");
    if (file==NULL)
    printf("file dosen't exist");
    else
    {
        printf("file is opended\n");
        for(i=0;i<l;i++)
        {
            fputc(name[i],file);
        }
        printf("file is written successfully\n");
    }
}
