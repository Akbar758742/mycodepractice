#include<stdio.h>
#include<ctype.h>

int main(){
    char character;
    printf("Press any key\n");
    character = getchar();
    if(isalpha(character)>0)
        printf("The character is letter\n");
    else
        if(isdigit(character)>0)
        printf("The character is digit\n");
    else
        printf("The character is alphanumeric\n");
    return 0;
}
