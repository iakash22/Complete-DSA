#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int s=0;
    int e=n-1;
    while(s<=e){
        // swap(arr[s],arr[e]);
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }
    for(int m=0; m<n; m++){
        cout<<arr[m]<<" ";
    }
    return 0;
}