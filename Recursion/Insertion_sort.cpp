#include<iostream>
using namespace std;
void Sort(int *arr,int n,int i){
    if(i == n){
        return ;
    }
    int curr = arr[i];
    int j = i-1;
    while(arr[j] > curr && j>=0){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = curr;

    Sort(arr,n,i+1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    Sort(arr,n,1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}