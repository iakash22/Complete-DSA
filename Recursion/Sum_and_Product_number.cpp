#include<iostream>
using namespace std;
int numSum(int n){
    if(n == 0){
        return 0;
    }

    return (n%10) + numSum(n/10);
}
int Product(int n){
    if(n == 0){
        return 1;
    }

    return n%10 * Product(n/10);
}
int main(){
    int n;
    cin>>n; 

    cout<<numSum(n)<<endl;
    cout<<Product(n);

    return 0;
}