#include<stdio.h>
int main ()

{ while(1){

    int sum=0,temp,num,r;
    printf("enter a number:");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
{
    r=temp%10;
    sum=sum*10+r;
    temp=temp/10;

}
printf("the reverse digit of this number is %d\n",sum);
}

}
