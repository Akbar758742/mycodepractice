#include<stdio.h>
int main()
{
    int ans,a,b,c,t;
    printf("how many times you want to find medium:");
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&a,&b,&c);
        if((a<b && b<c) || (c<b&& b<a))
        ans=b;
        else if((b<a && a<c)||(c<a && a<b))
        ans=a;
        else if((a<c && c<b) || (b<c&&c<a))
        ans=c;
     printf("%d\n",ans);
    }
}
