//write a program that collect the decimal price from user and convert to paisa
#include<stdio.h>
int main ()
{
float x,y;
printf(" enter a decimal price of a product in tk:");
scanf("%f",&x);
 y=x*100;
 printf("the price of this product is %.3f paisa:",y);
 return 0;
}
