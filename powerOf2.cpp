//Cpp program to check if a number is a power of 2

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter the number: ";
    cin >> number;
    int num = number;
    
    while(num > 1){
        if((num % 2) != 0){
            cout << number << " is not a power of 2" << endl;
            break;
        }
        num /= 2;
    }
    if(num == 1){
        cout << number << " is a power of 2" << endl; 
    }
    
    return 0;
}