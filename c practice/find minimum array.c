 #include<stdio.h>
 int main()
 {
     int num[100],n,i;
     printf("how many number you want to compare:");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         scanf("%d",&num[i]);
     }
     int min=num[0];
     for(i=0;i<n;i++)
     {
         if(min>num[i])
            min=num[i];
     }
     int max=num[0];
     for(i=0;i<n;i++)
     {
         if(max<num[i])
            max=num[i];
     }

     printf("min and max is %d %d",min,max);
 }
