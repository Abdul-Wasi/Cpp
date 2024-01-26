/*You are given a string s, where every two consecutive vertical bars '|' are grouped into a pair. In other words, the 1st and 2nd '|' make a pair, the 3rd and 4th '|' make a pair, and so forth.
Return the number of '*' in s, excluding the '*' between each pair of '|'. 
Note that each '|' will belong to exactly one pair.    */

#include <iostream>

using namespace std;

class Solution {
public:
    int countAsterisks(string s) {
        int count = 0;
        bool inside_pair = false;
        int n = s.size();
        
        for (int i = 0; i < n; i++) {
            if (s[i] == '|') {
                inside_pair = !inside_pair;
            }
            
            if ((s[i] == '*') && !inside_pair) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution solution;
    string inputString;

    // Taking user input for the string
    cout << "Enter a string: ";
    getline(cin, inputString);

    // Calling the countAsterisks function and displaying the result
    int result = solution.countAsterisks(inputString);
    cout << "Number of asterisks outside pairs: " << result << endl;

    return 0;
}
