#include<bits/stdc++.h>
using namespace std;
int maximumProfit(int arr[],int n){
    int mini = arr[0];
    int maxProfit = 0;
    for(int i=0; i<n; i++){
        int cost = arr[i] - mini;
        maxProfit = max(maxProfit, cost);
        mini = min(mini, arr[i]);
    }
    return maxProfit;
}
int maximumprofit(int arr[], int n){
    int mini = INT_MAX;
    int maxProfit = 0;
    for(int i=0; i<n; i++){
        mini = min(mini, arr[i]);
        maxProfit = max(maxProfit, arr[i] - mini);
    }
    return maxProfit;
}
int main(){
    int arr[5] = {7,1,2,5,6};
    // cout<<maximumProfit(arr,5);
    cout<<maximumprofit(arr,5);

return 0;
}