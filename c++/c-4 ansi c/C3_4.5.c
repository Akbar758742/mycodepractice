#include<stdio.h>
#include<ctype.h>

int main(){
    float x,y;
    double p,q;

    printf("Values for x and y: \n");
    scanf("%f %e", &x, &y);
    printf("%f %f\n",x,y);

    printf("Values for p and q: \n");
    scanf("%lf %lf", &p,&q);
    printf("%.12lf %.12e",p,q);

    return 0;
}
