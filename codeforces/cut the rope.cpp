#include <iostream>
#include <vector>
#include <algorithm>

struct Nail {
    int height;
    int ropeLength;
};

bool compareNails(const Nail& n1, const Nail& n2) {
    return n1.height > n2.height; // Sort nails in descending order of height
}

int main() {
    int t;
    std::cin >> t;

    for (int testCase = 0; testCase < t; ++testCase) {
        int n;
        std::cin >> n;

        std::vector<Nail> nails(n);

        for (int i = 0; i < n; ++i) {
            std::cin >> nails[i].height >> nails[i].ropeLength;
        }

        std::sort(nails.begin(), nails.end(), compareNails); // Sort nails in descending order of height

        int ropesToCut = 0;
        int maxHeight = nails[0].height;
        int maxRopeLength = nails[0].ropeLength;

        for (int i = 1; i < n; ++i) {
            if (nails[i].height + nails[i].ropeLength <= maxHeight) {
                ropesToCut++; // Cut the rope if the nail is below or at the same height as the current max height
            } else if (nails[i].ropeLength > maxRopeLength) {
                maxRopeLength = nails[i].ropeLength; // Update the max rope length if a higher one is found
            }
        }

        if (ropesToCut == 0) {
            std::cout << "0" << std::endl;
        } else {
            std::cout << ropesToCut + 1 << std::endl; // Add 1 for the rope connected to the candy
        }
    }

    return 0;
}

