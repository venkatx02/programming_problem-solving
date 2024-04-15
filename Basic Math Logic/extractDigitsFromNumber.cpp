#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cout<<"Enter a number to extract its digits"<<endl;
    cin>>num;
    while(num!=0){
        int lDig=num%10;//divides the number by 10 and gives the remainder//last digit
        cout<<lDig<<" ";
        num=num/10;//divides the number by 10 and gives the quotient//remaining number
    }
    return 0;
}