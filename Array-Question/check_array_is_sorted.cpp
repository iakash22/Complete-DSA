#include<iostream>
using namespace std;
void input(int arr[],int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}
bool checkSorted(int arr[],int n){
   for(int i=0; i<n-1; i++){
            if(arr[i+1] < arr[i]){
                return 0;
            }
        }
        return 1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    input(arr,n);

    cout<<checkSorted;

    return 0;
}