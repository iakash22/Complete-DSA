#include<bits/stdc++.h>
using namespace std;

void Sort_0_1_2(int arr[],int n){
    int st=0,mid=0,ed=n-1;
    while(mid <= ed){

        if(arr[mid] == 1){
            mid++;
        }
        else if(arr[mid] == 0){
            swap(arr[st],arr[mid]);
            st++;
            mid++;
        }
        else if(arr[mid] == 2){
            swap(arr[ed],arr[mid]);
            ed--;
        }
    }
}

void Sort_0_1(int arr[],int n){
    int i=0; 
    int j=n-1;
    while(i<=j){
        if(arr[i] == 1 && arr[j] == 0){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
        else if(arr[j] == 1){
            j--;
        }
        else{
            i++;
        }
    }
}
 
void input(int arr[],int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

void display(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    input(arr,n);
    Sort_0_1_2(arr,n);
    display(arr,n);

    return 0;
}