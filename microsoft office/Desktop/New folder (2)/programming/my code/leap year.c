#include<stdio.h>
int main ()
{
    int x;
    printf("enter a year");
    scanf("%d",&x);


    /* if (x%400==0)
         printf("leap year");
     else if ((x%100)!=0 && (x%4)==0)
         printf("leap year");
    */

    if ((x%400==0) || (x%100)!=0 && (x%4)==0)
        printf("leap year");

    else
        printf("not leap year");
    getch();
}
