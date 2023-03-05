#include<iostream>
using namespace std;

// Space Complexity -->> O(n)
/* time Complexity 
   Average Case : O(nlog(n))
   Best Case : O(nlog(n))
   Worst Case: O(nlog(n))  */

// input array 
void input(int *arr,int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}
// Print Array
void print(int *arr,int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
void Merge(int *arr,int s,int e){
    int mid = s + (e-s)/2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *first = new int[len1];
    int *second = new int[len2];

    // Copy half main array to first array
    int mainArrayindex = s;
    for(int i=0; i<len1; i++){
        first[i] = arr[mainArrayindex++];
    }

    //Copy half main array to second array
    mainArrayindex = mid+1;
    for(int i=0; i<len2; i++){
        second[i] = arr[mainArrayindex++];
    }

    int fi = 0;
    int si = 0;
    mainArrayindex = s;

    // Merge Sorted Array
    while(fi < len1 && si < len2){
        if(first[fi] < second[si]){
            arr[mainArrayindex++] = first[fi++];
        }
        else{
            arr[mainArrayindex++] = second[si++];
        }
    }

    // merge left First Array
    while(fi < len1){
        arr[mainArrayindex++] = first[fi++];
    }

    // merge left second Array
    while(si < len2){
        arr[mainArrayindex++] = second[si++];
    }
    
    delete []first;
    delete []second;
}
void Merge_Sort(int *arr,int s,int e){
    // base case
    if(s>=e){
        return;
    }
    //find mid point
    int mid = s + (e-s)/2;

    // Sort left part
    Merge_Sort(arr,s,mid);

    //Sort right part
    Merge_Sort(arr,mid+1,e);

    //merge Array
    Merge(arr,s,e);
}
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    input(arr,n);

    Merge_Sort(arr,0,n-1);

    print(arr,n);
    delete []arr;
    return 0;
    
}