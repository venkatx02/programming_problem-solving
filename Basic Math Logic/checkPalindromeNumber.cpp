#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(int num) {
    int dup = num;
    int revNum = 0;
    while(num != 0){
        int lDig = num % 10;
        revNum = (revNum * 10) + lDig;
        num = num / 10;
    }
    if(dup == revNum) return true;
    else return false;
}

int main() {
    cout << checkPalindrome(153351);
    return 0;
}