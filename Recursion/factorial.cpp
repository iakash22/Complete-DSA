#include<iostream>
using namespace std;
int fact1(int n){
    // Base Case
    if(n == 0){
        return 1;
    }
    // Recursive Relation
    int ans = fact1(n-1);
    int factorial = n * ans;
    return factorial;
    // return n * fact1(n-1);
}
int fact2(int n){
    int factorial=1;
    if(n != 0)
    factorial = n * fact2(n-1);
    return factorial;
}
int main(){
    int n;
    cin>>n;
    cout<<fact1(n)<<endl;
    // cout<<fact2(n)<<endl;

    return 0;
}