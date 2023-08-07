#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &arr){
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}
void waveSort(vector<int> &arr){
    for(int i=1; i<=arr.size()-2; i+=2){
        if(arr[i] >= arr[i-1]){
            swap(arr[i],arr[i-1]);
        }

        if(arr[i] >= arr[i+1] && i<=arr.size()-2){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    vector<int> arr{1,2,3,4,5,4,1,54,51,21,5,45,8};
    waveSort(arr);
    print(arr);


    return 0;
}