#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    
    for (int i = 10; i <= n; i++){
        for(int num = i; num > 0; num /= 10){
            sum += (num % 10);
        }
    }
    cout << "Sum of digits of all numbers from 1 to "<< n << " is: " << sum;
    
    return 0;
}