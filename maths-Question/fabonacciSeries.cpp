#include<iostream>
using namespace std;
int main(){
    int n;
    int t1=0,t2=1;
    int nexterm;
    cin>>n;
    for(int i=0; i<=n; i++){
        cout<<t1<<endl;
        nexterm=t1+t2;
        t1=t2;
        t2=nexterm;
    }
    return 0;
}