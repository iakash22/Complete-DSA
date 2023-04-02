#include<bits/stdc++.h>
using namespace std;
int minLength(vector<int> &arr,int target){
    if(target == 0){
        return 0;
    }
    if(target < 0){
        return INT_MAX;
    }
    int mini = INT_MAX;
    for(int i=0; i<arr.size(); i++){
        int ans = minLength(arr,target-arr[i]);
        if(ans != INT_MAX){
            mini = min(mini,ans+1);
        }
    }
    return mini;
}
int maxLength(vector<int> &arr,int target){
    if(target == 0){
        return 0;
    }
    if(target < 0){
        return INT_MIN;
    }
    int maxi = INT_MIN;
    for(int i=0; i<arr.size(); i++){
        int ans = maxLength(arr,target-arr[i]);
        if(ans != INT_MIN){
            maxi = max(maxi,ans+1);
        }
    }
    return maxi;
}
int main(){
    vector<int> arr{2,3,4};
    int target = 11;
    cout<<minLength(arr,target)<<endl;
    cout<<maxLength(arr,target)<<endl;
    return 0;
}