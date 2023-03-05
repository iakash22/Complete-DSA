#include<bits/stdc++.h>
using namespace std;
// Combination 
void solve_1(vector<int> empty,int index,int n,int k){
    if(k == empty.size()){
        for(int ans : empty){
            cout<<ans;
        }cout<<endl;
        return ;
    }

    for(int i=index; i<=n; i++){
        empty.push_back(i);
        solve_1(empty,i+1,n,k);
        empty.pop_back();
    }
}


 // combination sum - 2
void solve_2(vector<int>& candidates, int target,int index,vector<int> temp,vector<vector<int>>& ans){
            if(target == 0){
                ans.push_back(temp);
                return;
            }

        for(int i=index; i<candidates.size(); i++){
            if(i != index && candidates[i] == candidates[i-1]) continue;
            if(candidates[i] > target)break;
            temp.push_back(candidates[i]);
            solve_2(candidates,target - candidates[i],i+1,temp,ans);
            temp.pop_back();
        }
    }

// Time Complexity -- >> O(2^t * n)
// Space Complexity -->> O(n*x)  x is pick element bases
void solve_3(string str,int target,int index,string empty){
    if(index == str.size()){
        if(target == 0){
            cout<<empty<<endl;
        }
        return ;
    }

    // pick the element 
    string temp1;
    temp1.push_back(str[index]);
    if(stoi(temp1) <= target){
        empty.push_back(str[index]);
        string temp;
        temp.push_back(str[index]);
        int n = stoi(temp);
        solve_3(str,target - n,index,empty);

        // backtrack
        empty.pop_back();
    }

    solve_3(str,target,index+1,empty);
}
int main(){
    string str = "123";
    // solve(str,4,0,"");
    vector<int> empty;
    solve_1(empty,1,4,2);
    // cout<<to_string(str[0]);
return 0;
}