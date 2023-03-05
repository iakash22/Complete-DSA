#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    bool flag=0;
    cin>>n;
    for (int i=2; i<sqrt(n); i++){
        if(n%i == 0){
            cout<<" Non--Prime ";
            flag=1;
            return 0;
        }
    }
    if(flag == 0){
        cout<<" Prime--Number ";
        return 1;
    }
    return 0;
}