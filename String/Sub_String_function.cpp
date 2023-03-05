#include<iostream>
using namespace std;
int main(){
    int n,m;
    string str = "nincompoop";
    cin>>n>>m;

    string s1 = str.substr(n, m);
    cout<<s1;
    return 0;
}