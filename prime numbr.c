#include<stdio.h>
int main ()
{
    int num,i,count=0;
    printf("Enter a  positive numebr:");
    scanf("%d",&num);
    if(num==0||num==1)
    {
        count++;
    }
    for (i=2; i<num; ++ i)
    {
        if(num%i==0)
        {
            count++;
            break;
        }



    }
    if (count==0)

        printf("%d is a prime number\n",num);

    else
        printf("%d is not prime number\n",num);
    return main ();
    getch();
}
