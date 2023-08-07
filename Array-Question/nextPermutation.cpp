#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
vector<int> next_Permutation(vector<int> &arr){
    int n = arr.size();
    int idx1 = -1;
    int idx2 = -1;

    for(int i=n-2; i>=0; i--){
        if(arr[i] < arr[i+1]){
            idx1 = i;
            break;
        }
    }
    if(idx1 < 0){
        reverse(arr.begin(), arr.end());
    }
    else{
        for(int i=n-1; i>=0; i--){
            if(arr[idx1] > arr[i]){
                idx2 = i;
                break;
            }
        }
        swap(arr[idx1],arr[idx2]);
        reverse(arr.begin() + idx1 + 1 , arr.end());
    }
    return arr;
}
int main(){
    vector<int> arr{1,2,3};
    vector<int> ans = next_Permutation(arr);
    for(auto val : ans) cout<<val<<" ";
    return 0;
}