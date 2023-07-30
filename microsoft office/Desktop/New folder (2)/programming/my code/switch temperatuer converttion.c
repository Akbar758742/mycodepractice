#include<stdio.h>
int main()
{
    int choice;
    float temp,convertedtemp;
    printf("Temperature conversion menu\n");
    printf("1:fahrenheit to celseus\n");
    printf("2:celceus to farhenheit\n");
    printf("Enter your choice\n");
    scanf("%d",& choice);
    switch (choice)
    {
    case 1:
    {
        printf("enter the fahrenheit temperature:");
        scanf("%f",&temp);
        convertedtemp =(temp-32)/1.8;
        printf("the temperature in celseus is %f\n",convertedtemp);
        break;
    }
    case 2:
    {
        printf("enter the celseus temperature:");
        scanf("%f",&temp);
        convertedtemp =(1.8*temp)+32;
        printf("the temperature in fahrenheit is %f\n",convertedtemp);

    }
    default :
        printf("not a correct option");

    }

}
