//Given two strings A and B consisting of lowercase English letters. Choose any integer K and determine if A can be converted into B by shifting each character to the left by K.

#include <iostream>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    
    int dif = (str1[0] - str2[0] + 26) % 26;
    int n = str1.size();
    for(int i = 1; i < n; i++){
        int currentDif = (str1[i] - str2[i] + 26) % 26;
        if(currentDif != dif){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}