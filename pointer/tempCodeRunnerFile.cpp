#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;
    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    int b = 15;
    ptr = &b;
    // cout<<b<<endl;
    // cout<<&b<<endl;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    b = b + a;
    cout<<*ptr<<endl;
    *ptr = *ptr<<1;
    cout<<b<<endl;

return 0;
}