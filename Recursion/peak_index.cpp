#include<iostream>
using namespace std;
int peak(int arr[],int st,int ed){
    int mid = st + (ed-st)/2;
    if(st>=ed){
        return mid;
    }
    if(arr[mid] <= arr[mid+1]){
        return peak(arr,mid+1,ed);
    }
    else{
        return peak(arr,st,mid);
    }
}
int main(){
    int n;
    cin>>n; 
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<peak(arr,0,n-1);

    return 0;
}