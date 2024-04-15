#include <bits/stdc++.h>
using namespace std;

int greatestCommonDivisor(int num1, int num2) {
    int gcd = 1;
    for(int i = 1; i <= min(num1, num2); i++){
        if(num1%i == 0 && num2%i == 0){
            gcd=i;
        }
    }
    return gcd;
}

int main() {
    cout<< greatestCommonDivisor(66, 132);
    return 0;
}