//Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.

#include <iostream>

using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (isupper(s[i])) {
                s[i] = tolower(s[i]);
            } else {
                continue;
            }
        }
        return s;
    }
};

int main() {
    Solution solution;
    string inputString;

    // Taking user input for the string
    cout << "Enter a string: ";
    getline(cin, inputString);

    // Calling the toLowerCase function and displaying the result
    string result = solution.toLowerCase(inputString);
    cout << "String in lowercase: " << result << endl;

    return 0;
}
