#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    
    if(n == 0){
        cout << "The number of digits are: 1";
    }else{
        for(int i = n; i > 0; i /= 10){
        count++;
    }
    cout << "The number of digits are: "<< count;

    }
    
    return 0;
}