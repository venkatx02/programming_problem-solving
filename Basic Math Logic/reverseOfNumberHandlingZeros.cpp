#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cout<<"Enter a number to reverse its digits by handling the zeros"<<endl;
    cin>>num;
    int revNum=0;
    while(num!=0){
        int lDig=num%10;//divides the number by 10 and gives the remainder//last digit
        revNum=(revNum*10)+lDig;//multiplying with 10 and adding the last digit digit gives a number with the digits in consecutive[eg: 56=>(5*10)+6]
        num=num/10;//divides the number by 10 and gives the quotient//remaining number
    }
    cout<<revNum;
    return 0;
}