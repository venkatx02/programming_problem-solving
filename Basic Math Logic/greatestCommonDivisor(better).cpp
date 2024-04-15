#include <bits/stdc++.h>
using namespace std;

int greatestCommonDivisor(int num1, int num2) {
    int gcd = min(num1, num2);
    for(int i = min(num1, num2); i >= 1; i--){
        if(num1%i == 0 && num2%i == 0){
            gcd = i;
            break;
        }
    }
    return gcd;
}

int main() {
    cout<< greatestCommonDivisor(45, 90);
    return 0;
}