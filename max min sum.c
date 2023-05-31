#include <stdio.h>
#include <stdlib.h>

int main() {
    // Read in the five integers
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    // Sort the integers using bubble sort
    int temp;
    int sorted[5] = {a, b, c, d, e};
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (sorted[i] > sorted[j]) {
                temp = sorted[i];
                sorted[i] = sorted[j];
                sorted[j] = temp;
            }
        }
    }

    // Calculate the minimum and maximum values
    int minimum = sorted[0] + sorted[1] + sorted[2] + sorted[3];
    int maximum = sorted[1] + sorted[2] + sorted[3] + sorted[4];

    // Print the minimum and maximum values
    printf("%d %d\n", minimum, maximum);

    return 0;
}

