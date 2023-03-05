#include<iostream>
using namespace std;
bool LinearSearch(int arr[],int n,int key){
    if(n == 0){
        return false;
    }

    if(arr[0] == key){
        return true;
    }
    else{
        bool check = LinearSearch(arr+1,n-1,key);
        return check;
    }
}
int main(){
    int n,key;
    cin>>n>>key; 
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<LinearSearch(arr,n,key);

    return 0;
}