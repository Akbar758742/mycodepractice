#include<stdio.h>
int main ()//price of rice is M tk and price of apple is N tk

{
    float M,N,sum;
    printf("enter the price of rice ");
    scanf("%f",&M);
    printf("enter the price of apple ");
    scanf("%f",&N);
    sum=M+N;
    printf("the total cost of marketing is %.2f",sum);
    return 0;
}
