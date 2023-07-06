#include <iostream>
#include <vector>
#include <algorithm>

int minimumPowerSum(std::vector<int>& suspicions, int k) {
    int n = suspicions.size();
    std::vector<int> differences(n - 1);

    for (int i = 0; i < n - 1; i++) {
        differences[i] = abs(suspicions[i] - suspicions[i + 1]);
    }

    std::sort(differences.begin(), differences.end());

    int result = suspicions[n - 1] - suspicions[0];

    for (int i = 0; i < k - 1 && i < n - 1; i++) {
        result -= differences[n - 2 - i];
    }

    return result;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, k;
        std::cin >> n >> k;

        std::vector<int> suspicions(n);
        for (int i = 0; i < n; i++) {
            std::cin >> suspicions[i];
        }

        int powerSum = minimumPowerSum(suspicions, k);
        std::cout << powerSum << std::endl;
    }

    return 0;
}

