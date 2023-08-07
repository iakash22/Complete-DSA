#include<iostream>
#include<vector>
using namespace std;

int findMaxSum(vector<int> &arr,int st,int ed){
    if(st == ed){
        return arr[st];
    }
    int mid = st + (ed-st)/2;
    int leftMaxSum = INT_MIN, rightMaxSum = INT_MIN;
    int leftSum = findMaxSum(arr,st,mid);
    int rightSum = findMaxSum(arr,mid+1,ed);

    int sum = 0;
    for(int i=mid; i>=st; i--){
        sum += arr[i];
        leftMaxSum = max(leftMaxSum,sum);
    }
    sum = 0;
    for(int i=mid+1; i<=ed; i++){
        sum += arr[i];
        rightMaxSum = max(rightMaxSum,sum);
    }

    int maxSum = leftMaxSum + rightMaxSum;
    return max(maxSum, max(leftSum,rightSum));
}

int main(){
    vector<int> arr{5,4,-1,7,8};
    int maxSum = findMaxSum(arr,0,arr.size() - 1);

    cout<<maxSum<<endl;

    return 0;
}