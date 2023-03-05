#include<bits/stdc++.h>
using namespace std;
int Order_Agstc_binary(int arr[],int n,int target){
    int st = 0;
    int ed = n-1;
    bool isAsc = arr[st] < arr[ed];
    while(st<=ed){
        int mid = st + (ed-st)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(isAsc){
        if(arr[mid] > target){
            ed = mid-1;
        }
        else{
            st = mid+1;
        }
    }
    else{
        if(arr[mid] < target){
            ed = mid+1;
        }
        else{
            st = mid+1;
        }
    }
}
    return -1;
}
int main(){
    int n,target;
    cin>>n>>target;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<Order_Agstc_binary(arr,n,target)<<endl;

    return 0;
}