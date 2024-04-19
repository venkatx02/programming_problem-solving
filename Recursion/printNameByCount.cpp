#include <bits/stdc++.h>
using namespace std;

void printNameByCount(string fname, int i, int fcount){
    if(i>fcount) return;
    cout<< fname <<endl;
    printNameByCount(fname, i+1, fcount);
}

int main() {
    string name;
    int count;
    cout<<"Enter name";
    cin>>name;
    cout<<"Enter count";
    cin>>count;
    printNameByCount(name, 1, count);
    return 0;
}