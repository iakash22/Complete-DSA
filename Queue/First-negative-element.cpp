#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void print(vector<int> arr){
    for(auto x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
}
vector<int> first_Negative_element(vector<int> arr,int k){
    vector<int> ans;
    deque<int> q;
    for(int i=0; i<k; i++){
        if(arr[i] < 0){
            q.push_back(i);
        }
    }
    if(!q.empty()){
        ans.push_back(arr[q.front()]);
    }
    else{
        ans.push_back(0);
    }

    for(int i=k; i<arr.size(); i++){
        if(!q.empty() && i-q.front() >= k){
            q.pop_front();
        }
        if(arr[i] < 0){
            q.push_back(i);
        }
        if(!q.empty()){
        ans.push_back(arr[q.front()]);
        }
        else{
            ans.push_back(0);
        }
    }
    return ans;
}
int main(){
    vector<int> arr{-8,7,6,-1,2};  // -8 0 -1 -1
    print(arr);
    vector<int> ans = first_Negative_element(arr,2);
    print(ans);


    return 0;
}