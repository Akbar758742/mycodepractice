#include<stdio.h>
int main()
{
    float area,base,height;
    printf("enter the area and base of a triangle:");//we have to find out the height;
    scanf("%f%f",

          area,base);
    height=((area*2)/base);//area=(base*height)/2
    printf("the height of this triangle is %.2f",height);
    return 0;

}
