#include <bits/stdc++.h>
using namespace std;

void printNto1(int n){
    if(n<1) return;
    printNto1(n-1);
    cout<<n<<endl;
}

int main() {
    printNto1(21);
    return 0;
}