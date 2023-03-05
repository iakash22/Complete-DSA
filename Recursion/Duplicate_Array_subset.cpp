#include<bits/stdc++.h>
using namespace std;
void dupl_sub(string str,string empty,int index){
    cout<<empty<<endl;
    for(int i=index; i<str.size(); i++){
        if(i != index && str[i] == str[i -1])continue;
        empty.push_back(str[i]);
        dupl_sub(str,empty,index+1);
        empty.pop_back();
    }
}
int main(){
    string str = "122";
    dupl_sub(str,"",0);
    // int arr[3] == {1,2,2};

    return 0;
}
// ans.push_back(v);
//         for(int i=ind;i<nums.size();i++){
//             if(i!=ind && nums[i]==nums[i-1]) continue;
//             v.push_back(nums[i]);
//             subset_sum(i+1,nums,v,ans);
//             v.pop_back();
//         }