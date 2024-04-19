#include <bits/stdc++.h>
using namespace std;

void print1toN(int i, int j){
    if(i>j) return;
    cout<< i <<endl;
    print1toN(i+1, j);
}

int main() {
    int n = 21;
    print1toN(1, n);
    return 0;
}