#include<bits/stdc++.h>
using namespace std;

// Moore's Voting Algorithm
int Majority_Element(int arr[],int n){
    int cnt = 0;
    int element = 0;
    for(int i=0; i<n; i++){
        if(cnt == 0){
            element = arr[i];
        }
        if(arr[i] == element){
            cnt += 1;
        }
        else{
            cnt -= 1;
        }
    }
    return element;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    cout<<Majority_Element(arr,5);
return 0;
}