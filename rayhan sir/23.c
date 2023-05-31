#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int x,y,z;
    float a,b,c;

    printf(" Enter three value a, b, c: ");
    scanf(" %f %f %f",&a,&b,&c);
    x=floor(a);
    y=ceil(b);
    z=ceil(c);
    printf("Values: ") ;
    printf("%d ",x);
    printf("%d ",y);
    printf("%d",z);
return 0;
}


