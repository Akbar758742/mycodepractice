#include<stdio.h>
int main(){
    char address[80];
    printf("Enter address:\n");
    scanf("%[^\n]", address);
    printf("%-80s\n\n", address);
    return 0;
}
