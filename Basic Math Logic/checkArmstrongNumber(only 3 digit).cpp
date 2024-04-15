#include <bits/stdc++.h>
using namespace std;

string checkArmstrong(int num) {
    int dup = num;
    int sum = 0;
    while(num != 0){
        int lDig = num % 10;
        sum = sum + (lDig * lDig * lDig);
        num = num / 10;
    }
    
    if(dup == sum) return "It is an Armstrong Number";
    else return "It is not an Armstrong Number";
}

int main() {
    cout<<checkArmstrong(153);
    return 0;
}