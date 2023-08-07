#include<iostream>
#include<vector>
using namespace std;
int rob(vector<int> &nums,int i){
    if(i >= nums.size()) return 0;

    int rob1 = nums[i] + rob(nums,i+2);
    int rob2 = 0 + rob(nums, i+1);

    return max(rob1, rob2);
}
int main(){
    vector<int> nums{1,2,3,1};
    int maxHouseRob = rob(nums,0);



    return 0;
}