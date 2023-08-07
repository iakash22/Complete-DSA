#include<bits/stdc++.h>
using namespace std;
void solve(int n,vector<int> &arr,int &ans,int num){
    if(num == n+1){
        for(int i=1; i<=n; i++){
            cout<<arr[i] << " ";
        }
        cout<<endl;
        ans++;
        return;
    }

    for(int i=1; i<=n; i++){
        if(arr[i] == 0 && (num % i == 0 || i % num == 0)){
            arr[i] = num;
            solve(n,arr,ans,num+1);
            arr[i] = 0;
        } 
    }
}
int countBeautifulArrangement(int n){
    int ans = 0;
    vector<int> arr(n+1);
    solve(n,arr,ans,1);

    return ans;
}
int main(){
    int n = 3;
    cout<<countBeautifulArrangement(n)<<endl;


    return 0;
}
