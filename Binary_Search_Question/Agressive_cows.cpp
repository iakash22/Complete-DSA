#include<bits/stdc++.h>
using namespace std;
void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void Sort(int arr[],int n){
    for(int i=1; i<n; i++){
        int current=arr[i];
        int j=i-1; 
        while(arr[j]>current && j>=0){    // Ascending Order
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
}
bool islargeMin(int arr[],int n,int k,int mid){
    int COWcount = 1;
    int lastpos = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] - lastpos >= mid){
            COWcount++;
            if(COWcount == k){
                return true;
            }
            lastpos = arr[i];
        }
    }
    return false;
}
int AgressiveCow(int arr[],int n,int k){
    Sort(arr,n);
    int s = 0;
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
        maxi = max(arr[i],maxi);
    }
    int e = maxi;
    int ans = 0;
    while(s<=e){
        int mid = s + (e-s)/2;
        if(islargeMin(arr,n,k,mid)){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return ans;
}
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    input(arr,n);
    cout<<AgressiveCow(arr,n,k);

    return 0;
}