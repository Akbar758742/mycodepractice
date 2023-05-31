#include<stdio.h>
int main()
{


    int t,a,b,c;
    scanf("%d",&t);

    while(t--)
    {scanf("%d%d%d",&a,&b,&c);

        if (a==c+b)
            printf("YES\n");
        else if(b==a+c)
            printf("YES\n",b);
        else if(c==a+b)
            printf("YES\n",c);
            else
                printf("NO\n");
    }


}
