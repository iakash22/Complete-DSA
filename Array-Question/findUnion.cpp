#include<iostream>
#include<vector>
using namespace std;
void print(int *arr,int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void printVector(vector<int> arr){
    for(auto data : arr){
        cout<<data<<" ";
    }
    cout<<endl;
}
void union_Duplicate(int *arr1,int *arr2,int n,int m){
    for(int i=0; i<n; i++){
        int element = arr1[i];
        for(int j=0; j<m; j++){
            if(element == arr2[j]){
                arr2[j] = -1;
            }
        }
    }
    vector<int>arr3;
    for(int i=0; i<n; i++){
        arr3.push_back(arr1[i]);
    }
    for(int i=0; i<m; i++){
        if(arr2[i] == -1) continue;
        else 
            arr3.push_back(arr2[i]);
    }
    printVector(arr3);
}
void union_UnDuplicate(int *arr1,int *arr2,int n,int m){
    int arr3[n+m];
    for(int i=0; i<n; i++){
        arr3[i] = arr1[i];
    }
    for(int i=0; i<m; i++){
        arr3[n+i] = arr2[i];
    }
    print(arr3,n+m);
}
int main(){
    int arr1[5] = {1,2,3,4,5};
    int arr2[4] = {1,7,2,5};
    union_UnDuplicate(arr1,arr2,5,4);
    union_Duplicate(arr1,arr2,5,4);

    return 0;
}