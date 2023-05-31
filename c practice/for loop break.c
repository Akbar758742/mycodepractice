#include<stdio.h>
int main ()
{
    int i;
    for (i=2;i<=20;i++)
    {
        printf("yes\n");
        if(i==10)
        {
            break;
        }
    }printf("%d",i);//i is that value for which value the loop is terminated,this loop will terminate for 10,so i=10

}
