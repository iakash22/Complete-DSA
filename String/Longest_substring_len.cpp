#include<bits/stdc++.h>
using namespace std;
int subString_len2(string s){
    vector<int> mpp(256, -1);
    int left = 0, right = 0;
    int len = 0;
    while(right < s.size()){
        if(mpp[s[right]] != -1) left = max(mpp[s[right]] + 1, left);
        mpp[s[right]] = right;
        len = max(len, right - left + 1);
        right++;
    }
    return len;
}
int subString_len1(string s){
    vector<int> mpp(256, -1);
    int start = -1;
    int len = 0;
    for(int i=0; i<s.size(); i++){
        if(mpp[s[i]] > start) 
            start = mpp[s[i]];
        mpp[s[i]] = i;
        len = max(len, i-start);
    }
    return len;
}
int main(){
    string s = "pwwkew";
    cout<<subString_len1(s);
    cout<<subString_len2(s);

return 0;
}