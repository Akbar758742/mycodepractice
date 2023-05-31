#include<stdio.h>
struct person
    {
        int age;
        float salary;
    };


int main()
{

struct person person1,person2;

   printf("enter information for the person1\n");
   printf("enter age for person1\n");
   scanf("%d",&person1.age);
   printf("enter salary for persone1\n");
   scanf("%f",&person1.salary);
   printf("person1\n");
   printf("age =%d\n",person1.age);
   printf("salary =%f\n",person1.salary);
   printf("\nn\nenter information for person2\n");
   printf("enter age for person2\n");
   scanf("%d",&person2.age);
   printf("\nenter salary for person2\n");
   scanf("%f",&person2.salary);
   printf("\n");
   printf("person2\n");
   printf("age =%d\n",person2.age);
   printf("salary =%f\n",person2.salary);
   getch();



}


