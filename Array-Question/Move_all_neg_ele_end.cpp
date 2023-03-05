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
void move_negative(int arr[],int n){
int count=0;
    int temp[n];
    for(int i=0; i<n; i++){
        if(arr[i] >= 0){
            temp[count] = arr[i];
            count++;
        }
    }

    for(int i=0; i<n; i++){
        if(arr[i] < 0){
        temp[count] = arr[i];
        count++;
        }
    }
    for(int i=0; i<n; i++){
        arr[i] = temp[i];
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    input(arr,n);

    move_negative(arr,n);
    print(arr,n);

    return 0;
}