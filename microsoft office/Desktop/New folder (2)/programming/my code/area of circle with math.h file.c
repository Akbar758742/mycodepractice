#include<stdio.h>
#include<math.h>
int main()
{
    float radius,area;
    printf("enter radius:");
    scanf("%f",&radius);
    area= M_PI*radius*radius;
    printf("area of circle is:%0.3f\n",area);
}
