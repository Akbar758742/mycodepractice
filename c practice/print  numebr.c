#include<stdio.h>
int main()
{
    int x,y,sum1,sum2;
    scanf("%d%d",&x,&y);

    float a,z,sum3;
    scanf("%f%f",&a,&z);
    sum1=4+x;
    sum2=2+y;
    sum3=2.0+a;
    printf("%d %d\n %.1f %.1f",sum1,sum2,sum3,z);
}
