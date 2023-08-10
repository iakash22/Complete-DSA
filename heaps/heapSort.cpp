#include<iostream>
#include"heapify.h"
using namespace std;
void print(int *arr,int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void heapSort(int *arr,int n){
    while(n != 1){
        swap(arr[1],arr[--n]);
        heapifyOne(arr,n,1);
    }
}
void heapSortZero(int *arr,int n){
    while(n != 0){
        swap(arr[0],arr[--n]);
        heapifyZero(arr,n,0);
    }
}
int main(){
    int arr[] = {98, 45, 16, 6, 20, 1, 10};
    int n = 7;
    cout<<"Before heap sort ->>>"<<endl;
    print(arr,n);
    cout<<endl;
    cout<<"After heap sort ->>>"<<endl;
    // heapSort(arr,n);
    // print(arr,n);
    heapSortZero(arr,n);
    print(arr,n);


    return 0;
}