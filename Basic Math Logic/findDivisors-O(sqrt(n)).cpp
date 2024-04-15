#include <bits/stdc++.h>
using namespace std;

void findDivisors(int num) {
    vector<int> divisors;
    for(int i = 1; i*i <= num; i++){
        if(num % i == 0){
            divisors.push_back(i);
            if(i != num/i){
                divisors.push_back(num/i);
            }
        }
    }
    sort(divisors.begin(), divisors.end());
    for(auto it: divisors) cout<< it<< " ";
}

int main() {
    findDivisors(36);
    return 0;
}