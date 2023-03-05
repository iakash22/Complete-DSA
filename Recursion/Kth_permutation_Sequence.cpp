#include<bits/stdc++.h>
using namespace std;
string getPermutation(int n,int k){
    vector<int> ans;
    int fact = 1;
    for(int i=1; i<n; i++){
        fact = fact * i;
        ans.push_back(i);
    }
    ans.push_back(n);
    k = k - 1;
    string res;
    while(true){
        res = res + to_string(ans[k / fact]);
        ans.erase(ans.begin() + k / fact);
        if(ans.empty()){
            break;
        }
        k = k % fact;
        fact = fact / ans.size();
    }
    return res;
}
int main(){
    int n = 4;
    int k = 17;

    cout<<getPermutation(n,k);

return 0;
}