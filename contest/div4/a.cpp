#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        // Check if any two digits have a sum greater or equal to 10
        if ((a + b >= 10) || (b + c >= 10) || (a + c >= 10)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

