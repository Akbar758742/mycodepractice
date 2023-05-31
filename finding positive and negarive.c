#include<stdio.h>
int main ()
{
    int x;
    printf("enter a numbr\n");
    scanf("%d",&x);
    if(x>0)
        printf("positive");
    else if (x<0)
        printf("negative");
    else
        printf("zero");
}
