#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char grid[8][9]; // To store the grid (8x8 with space for null-terminator)
        char word[9]; // To store the word (max length = 8 characters + null-terminator)

        // Read the grid for each test case
        for (int i = 0; i < 8; i++) {
            scanf("%s", grid[i]);
        }

        // Extract the word from the grid
        for (int col = 0; col < 8; col++) {
            int row = 0;
            while (row < 8 && grid[row][col] == '.') {
                row++; // Skip dots until the first letter is encountered
            }

            if (row < 8) {
                word[col] = grid[row][col]; // Store the letter in the word array
            } else {
                break; // Reached the end of the word, break out of the loop
            }
        }
        word[8] = '\0'; // Null-terminate the word

        printf("%s\n", word); // Output the word for the current test case
    }

    return 0;
}

