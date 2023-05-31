#include<stdio.h>
int main()

{
    float r,l,a,n,u,v;
    printf("enter the price of rice per kg:");
    scanf("%f",&r);
    printf("enter the weight of rice: ");
    scanf("%f",&l);
    u=l*r;
    printf("enter  the price of apple per kg:");
    scanf("%f",&a);
    printf("enter the weight of apple:");
    scanf("%f",&n);
    v=a*n;
    printf("the price of %0.2f kg rice is %.2f taka and the price  of %.2f kg apple is %.2f taka\n\n",l,u,n,v);
    return 0;
}
