#include<iostream>
using namespace std;
void input(int arr[],int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}
bool isSorted(int *arr,int n){
    if(n == 0 || n == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool check = isSorted(arr+1,n-1);
        return check;
    }
}
bool checkSorted(int arr[],int n){
    if(n == 1){
        return true;
    }
    bool restArray = checkSorted(arr+1,n-1);
    return (arr[0] <= arr[1] && restArray);
}
int main(){
    int n;
    cin>>n; 
    int arr[n];
    input(arr,n);

    cout<<checkSorted(arr,n)<<endl;
    cout<<isSorted(arr,n);

    return 0;
}