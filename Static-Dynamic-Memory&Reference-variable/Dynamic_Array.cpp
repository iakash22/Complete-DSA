
// Stack is a static memory
// Heap is a Dynamic memory

#include<iostream>
using namespace std;
int getsum(int *arr,int n){
    int ans=0;
    for(int i=0; i<n; i++){
        ans+=arr[i];
    }
    return ans;
}
int main(){
    // char ch = 'a';
    // cout<<"size of char : "<<sizeof(ch)<<endl; // 1
    // char *ptr = &ch;
    // // cout<<"size of char pointer : "<<sizeof(*ptr)<<endl; // 1
    // cout<<"size of char pointer : "<<sizeof(ptr)<<endl; // 8

    int n;
    cin>>n;
    // variable size array
    int *arr = new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Answer of Array sum : "<<getsum(arr,n);
    return 0;
}