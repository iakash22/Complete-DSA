#include<bits/stdc++.h>
using namespace std;
//Array Input
void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
// find Pivot element 
int getPivot(int arr[],int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        int mid = s + (e-s)/2;
        if(arr[mid] >= arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
    }
    return s;
}

// Binary Serach
int binarySearch(int arr[],int s,int e,int key){
    int start = s;
    int end = e;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
        return -1;
}
//Find Roated Array in key element
    int Find_Roatedarr_key(int arr[],int n,int key){
        int pivot = getPivot(arr,n);
        if(arr[pivot] <= key && key <= arr[n-1]){
            //Bin. serach for Second line
            return binarySearch(arr,pivot,n-1,key);
        }
        else{
            //Bin. Search For First line  
            return binarySearch(arr,0,pivot - 1,key);
        }

    }
int main(){
    int n,key;
    cin>>n>>key;
    int arr[n];
    input(arr,n);
    cout<<Find_Roatedarr_key(arr,n,key);

    return 0;
}