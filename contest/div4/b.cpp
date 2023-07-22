#include <stdio.h>

// Structure to represent each response
struct Response {
    int words;
    int quality;
};

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        struct Response responses[n];

        // Read responses for each test case
        for (int i = 0; i < n; i++) {
            scanf("%d %d", &responses[i].words, &responses[i].quality);
        }

        int maxQuality = 0;
        int winnerIndex = 0;

        // Find the winner based on the rules
        for (int i = 0; i < n; i++) {
            if (responses[i].words <= 10 && responses[i].quality > maxQuality) {
                maxQuality = responses[i].quality;
                winnerIndex = i;
            }
        }

        printf("%d\n", winnerIndex + 1); // Output the winner for the current test case
    }

    return 0;
}

