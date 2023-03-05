#include<bits/stdc++.h>
using namespace std;
void sum(int n){
    int ans=0;
    for(int i=1; i<=n; i++){
        cout<<i<<"+";
        ans+=i;
    }
    cout<<"\n"<<ans;
    return;
}
int main(){
    int n;
    cin>>n;
    cout<<"natural number SUM : ";
    sum(n);
    return 0;
}
