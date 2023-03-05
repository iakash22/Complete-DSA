#include<bits/stdc++.h>
using namespace std;
void input(int arr[],int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
void Rotate(int arr[],int n,int k){
    int temp[n];
    for(int i=0; i<n; i++){
        temp[(i+k)%n] = arr[i];
    }

    for(int i=0; i<n; i++){
        arr[i] = temp[i];
    }
}
void Rotate2(int arr[], int n,int k){
    int d = 0;
    k = k%n;
    int temp[n];

    for(int i=k; i<n; i++){
        temp[d] = arr[i];
        d++;
    }

    for(int i=0; i<k; i++){
        temp[d] = arr[i];
        d++;
    }

    for(int i=0; i<n; i++){
        arr[i] = temp[i];
    }
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    input(arr,n);

    Rotate2(arr,n,k);
    print(arr,n);

    return 0;
}