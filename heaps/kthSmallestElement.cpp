#include<iostream>
#include<vector>
#include<queue>
using namespace std;

// time complexity -> O(n)
// space complexity -> O(k) 
int findKthElementMAX(vector<int> &arr,int k){

    // using max heap
    priority_queue <int> pq;

    // push in pq 0 - k elements  
    for(int i=0; i<k; i++){
        pq.push(arr[i]);
    }

    for(int i=k; i<arr.size(); i++){
        if(pq.top() > arr[i]){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    return pq.top();
}

// time complexity -> O(n)
// space complexity -> O(n)
int findKthElementMIN(vector<int> &arr,int k){
    priority_queue <int, vector<int>, greater<int> > pq;

    for(int i=0; i<arr.size(); i++){
        pq.push(arr[i]);
    }

    for(int i=1; i<k; i++){
        pq.pop();
    }

    return pq.top();
}
int main(){
    vector<int> arr{4,5,1,8,41,6};
    int k = 3;
    
    cout<<"Use Max_heap to find kth element answer : "<<findKthElementMAX(arr,k)<<endl;
    cout<<"Use Min_heap to find kth element answer : "<<findKthElementMIN(arr,k)<<endl;

    return 0;
}
