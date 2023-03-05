#include<bits/stdc++.h>
using namespace std;
void input(int arr[],int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}
int Intersection(int arr1[],int arr2[],int n,int m){

    //    Time complexity O(n)
    vector<int> ans;
    int i=0,j=0;
    // int ans=0;
    while(i<n && j<m){
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans; 
}
int intersection(int arr1[],int arr2[],int n,int m){
// time Complexity O(n^2)


int ans=0;
    for(int i=0; i<n; i++){
        int element = arr1[i];
        for(int j=0; j<m; j++){
            if(element == arr2[j]){
                // cout<<arr2[i]<<" ";
                ans = element;
                arr2[j] = INT_MIN;
                break;
            }
        }
    }
    return ans;
}
int main(){
    
    int n,m;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];
    input(arr1,n);
    input(arr2,m);

    // int ans=0;
    cout<<Intersection(arr1,arr2,n,m);
    return 0;
}