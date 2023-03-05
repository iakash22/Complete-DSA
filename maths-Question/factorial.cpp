#include<iostream>
using namespace std;
void factrl(int n){
    int fact=1;
    for(int i=2; i<=n; i++){
        fact=fact*i;
        cout<<i<<"*";
    }
    cout<<"\nFactorial : "<<fact<<endl;
    return;
}
int main() {
    int n;
    cin>>n;
    cout<<"factor : 1*";
    factrl(n);
}



// int factorial(int n){
//     if(n<=1){
//         return 1;
//     }
//     return n * factorial(n-1);
// }
// int main(){
//     int a;
//     cin>>a;
// cout<<factorial(a);
