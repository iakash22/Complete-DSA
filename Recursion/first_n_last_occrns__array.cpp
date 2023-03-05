#include<iostream>
using namespace std;
void input(int arr[],int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}
int firstoccrns(int arr[],int n,int i,int key){
    if(i == n){
        return -1;
    }
    if(arr[i] == key){
        return i;
    }
    return firstoccrns(arr,n,i+1,key);
}
int lastoccrns(int arr[],int n,int i,int key){
    if(i == n){
        return -1;
    }
    int restArray = lastoccrns(arr,n,i+1,key);
    if(restArray != -1){
        return restArray;
    }
    if(arr[i] == key){
        return i;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int i=0;
    int key;
    cin>>key;
    int arr[n];
    input(arr,n);

    cout<<firstoccrns(arr,n,i,key)<<endl;
    cout<<lastoccrns(arr,n,i,key);

    return 0;
}