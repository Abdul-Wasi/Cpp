//You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.

#include <iostream>

using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int num_jewels = jewels.size() - 1;
        int num_stones = stones.size() - 1;
        int count = 0;

        for (int i = 0; i <= num_jewels; i++) {
            for (int j = 0; j <= num_stones; j++) {
                if (stones[j] == jewels[i]) {
                    count++;
                } else {
                    continue;
                }
            }
        }

        return count;
    }
};

int main() {
    Solution solution;
    string jewels, stones;

    // Taking user input for jewels and stones
    cout << "Enter jewels: ";
    cin >> jewels;

    cout << "Enter stones: ";
    cin >> stones;

    // Calling the numJewelsInStones function and displaying the result
    int result = solution.numJewelsInStones(jewels, stones);
    cout << "Number of jewels in stones: " << result << endl;

    return 0;
}
