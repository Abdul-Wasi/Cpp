//Given n and k print only those nos from 1 To n whose sum Of digits is equal to k


#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    for (int i = 1; i <= n; i++){
        int sum = 0;
        for (int j = i; j > 0; j /= 10){
        sum += (j % 10);
    }
    if(sum == k){
        cout << "For the number " << i << " the sum of digits is equal to " << k << endl ;
    }
    }
    
    return 0;
}