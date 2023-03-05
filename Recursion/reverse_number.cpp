#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sum = 0;
void rev1(int n){
    if(n == 0){
        return;
    }
    sum = sum*10 + (n%10);
    rev1(n/10);
}
int helper(int n,int digit){
    if(n == 0){
        return n;
    }
    int rem = n%10;
    return rem * (int)(pow(10, digit-1)) + helper(n/10, digit-1);
}
int rev2(int n){
    // Sometimes you might need some additional variables in the argumen
    // in that case, make another function
    int digit = (int)(log10(n) + 1);
    return helper(n,digit);
}
int main(){
    int n;
    cin>>n;
    // rev1(n);
    // n = sum;
    // cout<<rev2(n)<<endl;
    int digit = (int)(log10(n)) + 1;
    cout<<helper(n,digit);

    // cout<<n;
    return 0;
}