#include<stdio.h>


int main()
{
    printSeries(10);

    printf("Main Function Done!");

    return 0;
}
void printSeries(int n)
{
    if(n==0)
        return;

    printSeries(n-1);

    printf("%d\n", n);
}
