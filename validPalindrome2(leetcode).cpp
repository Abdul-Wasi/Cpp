/*
Q6 - Valid Palindrome II
Problem Link: https://leetcode.com/problems/valid-palindrome-ii/description/
*/


#include<iostream>
using namespace std;

class Solution {
private:
    bool isPalindrome(string &str, int i, int j ) {            //& str because we are calling by reference to save memory so that copy of string is not created rather its reference is used
        while(i < j){
            if(str[i] == str[j]){
                i++;
                j--;
            }else{
                return false;
            }
        }return true;
    }
public:
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        while (left < right) {
            if (s[left] != s[right]) {
                if (isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1)) {
                    return true;
                } else {
                    return false;
                }
            } else {
                left++;
                right--;
            }
        }
        return true;
    }
};

//Driver code
int main() {
	string s; cin>>s;
	Solution obj;
	if(obj.validPalindrome(s)) cout<<"true"<<endl;
	else cout<<"false"<<endl;
	return 0;
}