#include<stdio.h>
int main(){
    char address[80];
    printf("Enter address:\n");
    scanf("%[a-z]", address);
    printf("%-80s\n\n", address);
    return 0;
}
