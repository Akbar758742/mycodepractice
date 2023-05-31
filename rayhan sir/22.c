#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    float x,y,a,b,c;
    printf(" Enter x ");
    scanf("%f",&x);
    printf("Enter y ");
    scanf("%f",&y);
    a=((x+y)/(x-y));
    b=(x+y)/2;
    c=(x+y)*(x-y);
    a=((x+y)/(x-y));
    b=(x+y)/2;
    c=(x+y)*(x-y);
    printf("%f %f %f",a,b,c);
return 0;
}
