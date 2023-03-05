#include<iostream>
using namespace std;

// Space Complexity -->> O(n)
/* time Complexity 
   Average Case : O(nlog(n))
   Best Case : O(n(logn))
   Worst Case: O(n^2)  */
void input(int arr[],int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

void print(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int Partition(int arr[],int s,int e){
    int pivot = arr[s];
    int cnt = 0;

    // Count Less than element from pivot
    for(int i=s+1; i<=e; i++){
        if(arr[i] <= pivot){
            cnt++;
        }
    }
    // place pivot right position
    int pivotindex = cnt + s;
    swap(arr[pivotindex],arr[s]);

    int i=s; int j=e;
    // Right and Left wala part sambhal lete h
    while(i < pivotindex && j > pivotindex){
        // left 
        while(arr[i] <= arr[pivotindex]){
            i++;
        }

        //Right
        while(arr[j] > arr[pivotindex]){
            j--;
        }

        //Swap condition : arr[i] > arr[pivotindex] || arr[j] < arr[pivotindex]
        if(i < pivotindex && j > pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;
}
void Quick_Sort(int arr[],int st,int ed){
    if(st>=ed){
        return;
    }

    int pointer = Partition(arr,st,ed);

    //Sort Pointer to left side Array
    Quick_Sort(arr,st,pointer-1);

    //Sort Pointer to Right Side Array
    Quick_Sort(arr,pointer+1,ed);
}
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    input(arr,n);

    Quick_Sort(arr,0,n-1);

    print(arr,n);
    delete []arr;
    return 0;
}