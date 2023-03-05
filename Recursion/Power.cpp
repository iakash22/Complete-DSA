#include<iostream>
using namespace std;
int Power(int n){
    // Base case
    if(n == 0){
        return 1;
    }
    // recursive relation
    int pwr = 2 * Power(n-1);
    return pwr;
    // return 2 * Power(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<Power(n)<<endl;

    return 0;
}