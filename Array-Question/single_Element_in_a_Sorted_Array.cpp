#include<iostream>
#include<vector>
using namespace std;
int findSingleElement(vector<int> arr){
    int st = 0;
    int ed = arr.size() - 1;
    while(st <= ed){
        int mid = st + (ed - st)/2;
        if(st == ed) return st;
        if(mid%2 == 0){
            if(arr[mid] == arr[mid+1]) st = mid+2;
            else ed = mid;
        }
        else{
            if(arr[mid-1] == arr[mid]) st = mid+1;
            else ed = mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int>arr{1,2,2,3,3,4,4,5,5};
    int ans = findSingleElement(arr);
    cout<<"Element index : "<<ans<<endl;
    cout<<"Element : "<<arr[ans]<<endl;

    return 0;
}   