#include <iostream>
using namespace std;

int main() {
    string str;
    cin >>str;
    if(str.empty()){
        cout << "The string is empty" << endl;
    }else{
        int n = str.size();
        // int sum = (str[0] + str[n-1]);            //if we want to add the ascii values
        int sum = (str[0] - '0') + (str[n-1] - '0');
        char sum_char = sum;
        cout << sum << " -> " << sum_char << endl;
    }

    
    return 0;
}