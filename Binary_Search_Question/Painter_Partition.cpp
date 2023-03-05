#include<bits/stdc++.h>
using namespace std;
void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
bool ispossible(int arr[],int n,int k,int mid){
    int paintercount = 1;
    int paintimesum = 0;
    for(int i=0; i<n; i++){
        if(paintimesum + arr[i] <= mid){
            paintimesum += arr[i]; 
        }
        else{
            paintercount++;
            if(paintercount > k || mid < arr[i]){
                return false;
            }
            paintimesum = arr[i];
        }
    }
        return true;
}
int MinPartition(int arr[],int n,int k){
    int s = 0;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    int e = sum;
    int ans = 0;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(ispossible(arr,n,k,mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return ans;
}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    input(arr,n);
    cout<<MinPartition(arr,n,k);

    return 0;
}