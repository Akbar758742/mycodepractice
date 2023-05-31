#include<stdio.h>
int main(){

    float n = 98.7654;
    float n1 = 98.76544;
    float n2 = 988.76544;
    printf("%7.4f\n",n);
    printf("%7.4f\n",n1);
    printf("%7.4f\n\n",n2);//8input
    printf("%-7.2f\n",n);
    printf("%f\n",n);
    printf("%10.2e\n",n);
    printf("%11.4e\n",-n);
    printf("%-10.2e\n",n);
    printf("%*.*f\n",7,2,n);
    printf("%-10.2e\n",n);
    printf("%e\n",n);

return 0;
}
