#include<iostream>
using namespace std;
int numberof1s(int n){
    int count = 0;
    while(n){
        n = n & n-1;
        count++;
    }
    return count;
} 

int main(){
    int n;
    cin>>n;
    cout<<numberof1s(n);
    return 0;
}