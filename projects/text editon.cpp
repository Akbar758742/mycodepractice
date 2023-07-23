#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FILENAME_LENGTH 100
#define MAX_TEXT_LENGTH 1000

int main() {
    char filename[MAX_FILENAME_LENGTH];
    char text[MAX_TEXT_LENGTH];
    char choice;
    FILE *file;

    printf("Simple Text Editor\n");

    while (1) {
        printf("\nMenu:\n");
        printf("1. Create a new file\n");
        printf("2. Open an existing file\n");
        printf("3. Edit the file\n");
        printf("4. Save the file\n");
        printf("5. Exit\n");
        printf("Enter your choice (1/2/3/4/5): ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                printf("Enter the filename: ");
                scanf("%s", filename);
                file = fopen(filename, "w");
                if (file == NULL) {
                    printf("Error creating the file.\n");
                } else {
                    printf("File created successfully.\n");
                    fclose(file);
                }
                break;
            case '2':
                printf("Enter the filename to open: ");
                scanf("%s", filename);
                file = fopen(filename, "r");
                if (file == NULL) {
                    printf("Error opening the file.\n");
                } else {
                    while (fgets(text, MAX_TEXT_LENGTH, file) != NULL) {
                        printf("%s", text);
                    }
                    fclose(file);
                }
                break;
            case '3':
                printf("Enter text to append (max %d characters):\n", MAX_TEXT_LENGTH);
                scanf(" %[^\n]", text);
                file = fopen(filename, "a");
                if (file == NULL) {
                    printf("Error opening the file for editing.\n");
                } else {
                    fputs(text, file);
                    fclose(file);
                    printf("Text appended successfully.\n");
                }
                break;
            case '4':
                file = fopen(filename, "w");
                if (file == NULL) {
                    printf("Error saving the file.\n");
                } else {
                    printf("Enter text to save (max %d characters):\n", MAX_TEXT_LENGTH);
                    scanf(" %[^\n]", text);
                    fputs(text, file);
                    fclose(file);
                    printf("File saved successfully.\n");
                }
                break;
            case '5':
                printf("Exiting the text editor.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }
}

