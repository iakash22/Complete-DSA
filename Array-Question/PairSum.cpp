#include<bits/stdc++.h>
using namespace std;
int pairSumCounter(vector<int> &arr, int n, int target){
	// Write your code here.
    int i = 0;
    int j = n-1;
    int count = 0;
    while(i<j){
        if(arr[i] + arr[j] == target){
            i++;
            j--;
            count++;
        }
        else if(arr[i] + arr[j] < target){
            i++;
        }
        else if(arr[i] + arr[j] > target){
            j--;
        }
    }
    if(count == 0){
    return -1;}
    
    return count;
}
    // vector<vector<int>> PairSum(vector<int> &arr,int n, int s){
    // vector< vector<int> >ans;

    // for(int i=0; i<n; i++){
    //     for(int j=i+1; j<n; j++){
    //         if(arr[i] + arr[j] == s){
    //             vector<int> temp;
    //             temp.push_back(min(arr[i], arr[j]));
    //             temp.push_back(max(arr[i], arr[j]));
    //             ans.push_back(temp);
    //         }
    //     }
    // }
    // return ans;
// }
bool pairsum(int arr[],int n,int key){
    // for(int i=0; i<n-1; i++){
    //     for(int j=i+1; j<n; j++){           // Brute Force  time complexity O(n^2);
    //         if(arr[i]+arr[j] == key){
    //             cout<< i<<" "<<j<<endl;
    //             return true;
    //         }
    //     }
    // }
    int low=0;
    int high=n-1;
    while(low<high){
        if(arr[low]+arr[high] == key ){
            cout<< low << " " << high <<endl;
            return true;
        }
        else if(arr[low]+arr[high] > key){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<pairsum(arr,n,key);
}