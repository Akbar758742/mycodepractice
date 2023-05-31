#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    scanf("%d",&t);

    while(t--)
    {
        char a[100002],b[100002];
        scanf("%s %s",a,b);
        int len1=strlen(a);
        int len2=strlen(b);
        sort(a,a+len1);
        sort(b,b+len2);
        if(strcmp(a,b)==0)
            printf("YES\n");
        else
            printf("NO\n");

    }

}
