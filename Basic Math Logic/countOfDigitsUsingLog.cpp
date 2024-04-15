#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cout<<"Enter a number to count its digits"<<endl;
    cin>>num;
    int count = (int)(log10(num)+1);//gives the number of times it can be divisible by 10//+1 for adding the count of last single digit
    cout<<count;
    return 0;
}