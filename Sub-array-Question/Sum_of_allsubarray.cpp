#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int current=0;
    int mx = -1;
    for(int i=0; i<n; i++){
        current=0;
        cout<<"Subarray no : "<<i<<endl;
        for(int j=i; j<n; j++){
            current=current+arr[j];
            cout<<current<<endl;
            mx = max(current,mx);
        }
    }
    cout<<"max : "<<mx;
    return 0;
}