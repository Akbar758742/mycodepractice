#include<stdio.h>
int main()
{
    int  marks;
    printf("enter a marks of student ");
    scanf("%d",&marks);
    if ((marks >100) || (marks <0))
        printf("resul is invalid");
    else if (marks >=80)
        printf(" a+",marks);
    else if (marks >=70)
        printf("  a",marks);
    else if (marks>=60)
        printf("a-",marks);
    else if (marks >=50)
        printf("b ",marks);
    else if (marks >=40)
        printf("c",marks);
    else if( marks>=33)
        printf("D",marks);
   // else if (marks <33)
    // printf("result is invalid");
    else if (marks<33 || marks>=0)
       printf(" the value %d  is fail",marks);

    else
        printf("invalid input");
}
