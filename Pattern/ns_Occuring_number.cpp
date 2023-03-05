#include<iostream>
using namespace std;
bool isContainNumber(int n,int containDigit){
    if(n == 0) return true;
    while(n != 0){
        if(n%10 == containDigit){
            return true;
        }
        n /= 10;
    }
    return false;
}
int findNumbers(int n,int containDigit){
    int count = 0;
    for(int i=0; i<=n; i++){
        if(isContainNumber(i,containDigit)){
            cout<< i << " ";
            count++;
        }
    }
    cout<<endl;
    cout<<"0 to "<<n<<"th "<<containDigit<<" digit occur number count : ";
    return count;
}
int main(){
    int n;
    cout<<"Enter the Nth Number : ";
    cin>>n;
    int containDigit;
    cout<<"Enter Contain digit : ";
    cin>>containDigit;
    cout<<findNumbers(n,containDigit);

    return 0;
}