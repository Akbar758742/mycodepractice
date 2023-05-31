#include<stdio.h>
int main()
{
    int y = 50.1234;
    printf("%7.4f\n",y);
    printf("%7.2f\n",y);
    printf("%-7.2f\n",y);
    printf("%f\n", y);
    printf("10.2e\n",y);
    printf("%11.4e\n",-y);
    printf("%-10.2e\n",y);
    printf("%e",y);
}
