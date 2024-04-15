#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int num) {
    int counter = 0;
    for(int i = 1; i*i <= num; i++){
        if(num % i == 0){
            counter++;
            if(i != num/i){
                counter++;
            }
        }
    }
    if(counter == 2) return true;
    else return false;
}

int main() {
    cout<< checkPrime(5);
    return 0;
}