
#include <stdio.h>
#include <string.h>

void insertCharacter(char array[], int position, char character) {
    int length = strlen(array);

    if (position < 0 || position > length) {
        printf("Invalid position\n");
        return;
    }

    for (int i = length; i >= position; i--) {
        array[i + 1] = array[i];
    }

    array[position] = character;
}

int main() {
    char array[50] = "Hello, world!";
    int position = 5;
    char character = '!';

    printf("Original array: %s\n", array);

    insertCharacter(array, position, character);

    printf("Array after insertion: %s\n", array);

    return 0;
}
