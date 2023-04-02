#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> &arr,int i,int sum,int &maxSum){
    if(i >= arr.size()){
        maxSum = max(maxSum,sum);
        return;
    }
    solve(arr,i+1,sum,maxSum);
    solve(arr,i+2,sum+arr[i],maxSum);
}
int main(){
    vector<int> arr{1,2,3,4};
    int maxSum = 0;
    int sum = 0;
    int i=0;
    solve(arr,i,sum,maxSum);
    cout<<maxSum<<endl;
    return 0;
}