#include<bits/stdc++.h>
using namespace std;
vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    deque<int> q;
    vector<int> ans;
    for(int i=0; i<k; i++){
        while(!q.empty() && nums[i] >= nums[q.back()]){
            q.pop_back();
        }
        q.push_back(i);
    }
    ans.push_back(nums[q.front()]);

    for(int i=k; i<nums.size(); i++){
        if(!q.empty() && i-q.front() >= k){
            q.pop_front();
        }
        while(!q.empty() && nums[i] >= nums[q.back()]){
            q.pop_back();
        }
        q.push_back(i);

        ans.push_back(nums[q.front()]);
    }
    return ans;
}
int main(){
    vector<int> arr{1,2,3,4,5};
    vector<int> ans = maxSlidingWindow(arr, 3);

    for(auto val : ans){
        cout<<val<< " ";
    }
    cout<<endl;


    return 0;
}