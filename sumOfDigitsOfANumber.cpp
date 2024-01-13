#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    int sum = 0;
    for (int i = num; i > 0; i /= 10){
        sum += (i % 10);
    }
    cout << "The sum of digits is: " << sum;
    return 0;
}