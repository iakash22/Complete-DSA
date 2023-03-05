#include<bits/stdc++.h>
using namespace std;
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
void input(int arr[],int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}
void movezero(int arr[],int n){
    int i=0;
    for(int j=0; j<n; j++){

        if(arr[j] != 0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
}
int main(){
    int n;
    cin>>n; 
    int arr[n];
    input(arr,n);

    movezero(arr,n);
    print(arr,n);

    return 0;
}