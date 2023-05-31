#include<stdio.h>
struct person
    {
        int age;
        float salary;
    };

struct person person1,person2;
int main()
{



   person1.age=27;
   person1.salary=16888;
   printf("person1\n");
   printf("age =%d\n",person1.age);
   printf("salary =%f\n",person1.salary);
   person2.age=27;
   person2.salary=16888;
   printf("\n");
   printf("person2\n");
   printf("age =%d\n",person2.age);
   printf("salary =%f\n",person2.salary);
   getch();



}

