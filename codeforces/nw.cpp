#include <iostream>
#include <vector>
#include <algorithm>

struct Participant {
    int index;
    int points;
    int penalty;
};

bool compareParticipants(const Participant& p1, const Participant& p2) {
    if (p1.points != p2.points) {
        return p1.points > p2.points; // Higher points go first
    } else {
        return p1.penalty < p2.penalty; // Lower penalty goes first
    }
}

int main() {
    int t;
    std::cin >> t;

    for (int testCase = 0; testCase < t; ++testCase) {
        int n, m, h;
        std::cin >> n >> m >> h;

        std::vector<std::vector<int>> times(n, std::vector<int>(m));
        std::vector<Participant> participants(n);

        for (int i = 0; i < n; ++i) {
            participants[i].index = i + 1;
            participants[i].points = 0;
            participants[i].penalty = 0;

            for (int j = 0; j < m; ++j) {
                std::cin >> times[i][j];
            }
        }

        for (int i = 0; i < n; ++i) {
            std::sort(times[i].begin(), times[i].end()); // Sort the times in ascending order
        }

        for (int j = 0; j < m; ++j) {
            std::vector<int> solvedTimes;

            for (int i = 0; i < n; ++i) {
                solvedTimes.push_back(times[i][j]);
            }

            std::sort(solvedTimes.begin(), solvedTimes.end()); // Sort the solved times in ascending order

            int remainingTime = h - solvedTimes.size() * (j + 1); // Calculate the remaining time for this problem

            if (remainingTime >= 0) {
                int numParticipants = solvedTimes.size();

                for (int i = 0; i < numParticipants; ++i) {
                    int penalty = solvedTimes[i] + (remainingTime / numParticipants); // Calculate the penalty for each participant
                    participants[i].points++;
                    participants[i].penalty += penalty;
                }
            } else {
                break; // No more time left to solve the remaining problems
            }
        }

        std::sort(participants.begin(), participants.end(), compareParticipants); // Sort the participants based on points and penalty

        int rudolfPlace = 1;
        for (int i = 0; i < n; ++i) {
            if (participants[i].index == 1) {
                std::cout << rudolfPlace << std::endl;
                break;
            }
            rudolfPlace++;
        }
    }

    return 0;
}

