#include <bits/stdc++.h>
using namespace std;

int sumTill(int n) {
    if (n<1) {
        return n;
    }
    return n+sumTill(n-1);
}

int main() {
    cout<<sumTill(3);
    return 0;
}