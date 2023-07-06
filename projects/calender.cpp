#include<stdio.h>
int get1stdayoftheyear(int year)
{
    int day=(year*365+((year-1)/4)-((year-1)/100)+((year-1)/400))%7;
    return day;
}

int main()
{
 char *month[]={"January","February","March","April","May","june","july","August","September","October","November","December" };
 int daysinmonth[]={31   ,   28     ,  31   ,   30   ,  31,  30  ,  31   ,  31   ,   30      ,  31     ,     30   ,  31};
 int i,j,totaldays,weekdays=0,spacecounter=0,year;
 printf("enter your favourite year:\n");
 scanf("%d",&year);
 printf("\n\n************** welcome to %d ****************\n\n",year);
 //check if leap year
 if((year%4==0 && year%100!=0) || (year%400==0))
 {
     daysinmonth[1]=29;
 }
 //get 1stday of the year;
 weekdays=get1stdayoftheyear(year);

 for(i=0;i<12;i++)
 {
     printf("\n\n\n---------------------- %s -----------------------\n",month[i]);
     printf("\n   Sun   Mon   Tue   Wed   Thurs  Fri   Sat\n\n");
     for(spacecounter=1;spacecounter<=weekdays;spacecounter++)
     {
         printf("      ");
     }
     totaldays=daysinmonth[i];
     for(j=1;j<totaldays;j++)
     {
         printf("%6d",j);
         weekdays++;
         if(weekdays>6)
         {
             weekdays=0;
             printf("\n");
         }
     }


 }

 return 0;

}
