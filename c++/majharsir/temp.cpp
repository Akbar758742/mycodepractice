
#include<stdio.h>
int main()
{
    int i,j,k,isprime;
    printf("enter your desired value:");

    scanf("%d",&k);
      printf("prime numbers between 1 to %d:\n",k);


    for(i=1; i<=k; i++)
    {
        isprime=0;
        for(j=1; j<=i; j++)
        {
            if(i%j==0)
            {
                isprime++;
        //break;
            }

        }
        if(isprime==2)
        {
printf("%d ",i);
        }

    }


}
