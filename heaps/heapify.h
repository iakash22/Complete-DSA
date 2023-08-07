#include<iostream>
using namespace std;
void heapifyOne(int *arr,int n,int i){
    int leftIndex = i*2;
    int rightIndex = i*2 + 1;
    
    int largest = i;
    if(leftIndex < n && arr[leftIndex] > arr[largest]){
        largest = leftIndex;
    }
    if(rightIndex < n && arr[rightIndex] > arr[largest]){
        largest = rightIndex;
    }

    if(largest != i){
        swap(arr[largest],arr[i]);
        heapifyOne(arr,n,largest);
    }
}
void heapifyZero(int *arr,int n,int i){
    int leftIndex = i*2 + 1;
    int rightIndex = i*2 + 2;
    
    int largest = i;
    if(leftIndex < n && arr[leftIndex] > arr[largest]){
        largest = leftIndex;
    }
    if(rightIndex < n && arr[rightIndex] > arr[largest]){
        largest = rightIndex;
    }

    if(largest != i){
        swap(arr[largest],arr[i]);
        heapifyZero(arr,n,largest);
    }
}
