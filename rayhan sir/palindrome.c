
#include<stdio.h>
int main()
{
    int sum=0,r,num,temp;
    printf("Enter a number:");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
            }
            if(sum==num)
                printf("this is palindrome number");
            else
                printf("this is not palindrome number");

}
