#include<bits/stdc++.h>
using namespace std;
void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
bool isPossible(int arr[],int n,int m,int mid){
    int pagesum = 0;
    int stdntcount = 1;
    for(int i=0; i<n; i++){
        if(pagesum + arr[i] <= mid){
            pagesum+=arr[i];
        }
        else{
            stdntcount++;
            if(stdntcount > m || mid < arr[i]){
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}
int MINbookallocation(int arr[],int n,int m){
    int s = 0;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    int e=sum;
    int ans = 0;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return ans;
}
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    input(arr,n);
    cout<<MINbookallocation(arr,n,m);

    return 0;
}