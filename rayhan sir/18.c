#include<stdio.h>
int main(){
    int m = 1234;
    long n = 987654;
    printf("%d\n",m);
    printf("%10d\n",m);
    printf("%010d\n",m);
    printf("%-10d\n",m);
    printf("%10ld\n",n);
    printf("%10ld\n",-n);
return 0;
}
