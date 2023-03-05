#include<iostream>
using namespace std;
bool BinarySearch(int arr[],int st,int ed,int key){
    if(st>ed){
        return false;
    }
    int mid = st + (ed-st)/2;
    if(arr[mid] == key){
        return true;
    }
    if(arr[mid] > key){
        return BinarySearch(arr,st,mid-1,key);
    }
    else{
        return BinarySearch(arr,mid+1,ed,key);
    }
}
int main(){
    int n,key;
    cin>>n>>key;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<BinarySearch(arr,0,n-1,key);

    return 0;
}