#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    // string reverse_string = str;
    int n = str.size();
    // for(int i = 0; i < n/2; i++){
    //     swap(reverse_string[i], reverse_string[n-i-1]);
    // }
    // if(reverse_string == str){
    //     cout << "This is a palindrome" << endl;
    // } else {
    //     cout << "This is not a palindrome" << endl;
    // }

    int flag = 0;
    for(int i = 0; i < n; i++){
        if(str[i] != str[n-i-1]){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout << "This is a palindrome" << endl;
    }else{
        cout << "This is not a palindrome" << endl;
    }















    
    return 0;
}