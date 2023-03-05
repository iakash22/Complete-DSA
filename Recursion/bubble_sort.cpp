#include<iostream>
using namespace std;
void Sort(int *arr,int n){
    if(n == 0 || n == 1){
        return ;
    }

    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    Sort(arr,n-1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    Sort(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}