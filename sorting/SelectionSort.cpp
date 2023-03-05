#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int n;
    cin>>n;
    int arr[n];  //   find the minimum elements in unsorted array and swap it with element at begining. 
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] < arr[j]){
                int temp=arr[i]; 
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}