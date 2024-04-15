#include <bits/stdc++.h>
using namespace std;

// Euclidean Algorithm
// GCD(a, b) = GCD(a-b, b), where a>b => when a||b = 0, the other becomes the GCD

int euclideanGCD(int num1, int num2) {
    int gcd;
    while(num1>0 && num2>0){
        if(num1>num2) num1 = num1%num2;
        else num2 = num2%num1;
    }
    if(num1==0) gcd=num2;
    else gcd=num1;
    return gcd;
}

int main() {
    cout<< euclideanGCD(15, 20);
    return 0;
}