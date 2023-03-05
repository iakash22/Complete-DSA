#include<iostream>
using namespace std;

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}
// void fib(int n){
//     int t1=0,t2=1;
//     int nexterm;
//     for(int i=1; i<=n; i++){
//         cout<<t1<<endl;
//         nexterm=t1+t2;
//         t1=t2;
//         t2=nexterm;
//     }
//     return;
// }
int main (){
    int a;
    cin>>a;
    cout<<fib(a)<<endl;
    return 0;
}