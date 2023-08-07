#include<iostream>
#include"heapify.h"
using namespace std;
void print(int *arr,int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void creationOneIndexBased(int *arr,int n){
    for(int i=n/2; i>0; i--){
        heapifyOne(arr,n,i);
    }
}
void creationZeroIndexBased(int *arr,int n){
    for(int i=n/2; i>=0; i--){
        heapifyOne(arr,n,i);
    }
}
int main(){
    int arr[] = {-1,10,45,1,6,20,98,16};
    int n = 8;
    cout<<"Before heap Creation "<<endl;
    print(arr,n);

    // creationZeroIndexBased(arr,n);
    // cout<<"After heap creation Zero Index Based "<<endl;
    // print(arr,n);

    creationOneIndexBased(arr,n);
    cout<<"After heap creation One Index Based "<<endl;
    print(arr,n);

    return 0;
}