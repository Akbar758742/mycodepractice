#include<stdio.h>
int main()
{
    int i;
    float f;
    double d;
    char c;
    printf("size of int= %d\n",sizeof(i));// 2bytes for short int,4 for long int
    printf("size of float= %d\n",sizeof(f));
    printf("size of double= %d\n",sizeof(d));
    printf("size of char= %d\n",sizeof(c));
    return 0;
}
