#include<stdio.h>
int main ()
{
    float base,height,area;
    printf("enter base and height:");
    scanf("%f%f",&base,&height);
    area=(base*height)/2;
    printf("the area of triangle is %.2f",area);
    return 0;
}
