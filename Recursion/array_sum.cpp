#include<iostream>
using namespace std;
int ArraySum(int arr[],int n){
    cout<<arr[0]<<endl;
    if(n == 0){
        return 0;
    }
    // int ans = 0;
    // int ans = arr[0];
    // ans = ans + ArraySum(arr+1,n-1);
    // return ans;
    return arr[0] + ArraySum(arr+1,n-1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<ArraySum(arr,n);

    return 0;
}