#include <iostream>

using namespace std;

bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }

    string str_x = to_string(x);
    string rev_str_x = str_x;

    int n = rev_str_x.size();
    for (int i = 0; i < n / 2; i++) {
        swap(rev_str_x[i], rev_str_x[n - i - 1]);
    }

    if (rev_str_x == str_x) {
        return true;
    } else {
        return false;
    }
}

int main() {
    // Example usage
    int inputNumber;
    cout << "Enter a number: ";
    cin >> inputNumber;

    if (isPalindrome(inputNumber)) {
        cout << inputNumber << " is a palindrome." << endl;
    } else {
        cout << inputNumber << " is not a palindrome." << endl;
    }

    return 0;
}
