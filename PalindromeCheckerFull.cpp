#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s) {
    string str = s;
    string cleanedStr;

    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = tolower(str[i]);
        }
        if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'z')) {
            cleanedStr += str[i];
        }
    }

    string rev_str = cleanedStr;
    int j = rev_str.size();
    for (int i = 0; i < j / 2; i++) {
        swap(rev_str[i], rev_str[j - i - 1]);
    }

    if (rev_str == cleanedStr) {
        return true;
    } else {
        return false;
    }
}

int main() {
    string inputString;

    cout << "Enter a string: ";
    getline(cin, inputString);

    if (isPalindrome(inputString)) {
        cout << "\"" << inputString << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << inputString << "\" is not a palindrome." << endl;
    }

    return 0;
}
