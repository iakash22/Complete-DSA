#include<bits/stdc++.h>
using namespace std;
int PeakElement(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if((mid == 0 || arr[mid] >= arr[mid-1]) && (mid == n-1 || arr[mid] >= arr[mid+1])){
            return mid;
        }
        else if(mid > 0 && arr[mid] <= arr[mid-1]){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
        return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    } 
    cout<<PeakElement(arr,n);
    return 0;
}