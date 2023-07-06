#include <stdio.h>

int countGroups(int arr[], int n) {
    int minStrength = arr[0];
    int groupCount = 1;

    for (int i = 1; i < n; i++) {
        minStrength = minStrength & arr[i];

        if (minStrength == 0) {
            groupCount++;
            minStrength = arr[i];
        }
    }

    return groupCount;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int groups = countGroups(arr, n);
        printf("%d\n", groups);
    }

    return 0;
}

