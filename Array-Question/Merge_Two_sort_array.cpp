#include<bits/stdc++.h>
using namespace std;
void input(int arr[],int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}
void print(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
void mergeSort(int arr1[], int arr2[], int arr3[], int n, int m){
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<n && j<m){
        if(arr1[i] <arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    // copy First array k element -->>
    while(i<n){
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    // copy Second array k element -->>
    while(j<m){
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];
    input(arr1,n);
    input(arr2,m);

    int arr3[m+n];

    mergeSort(arr1,arr2,arr3,n,m);
    print(arr3,m+n);

    return 0;
}