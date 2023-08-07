#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreater(vector<int> &v){
    vector<int> ans(v.size());
    stack<int> st;
    st.push(-1);
    
    for(int i=v.size()-1; i>=0; i--){
        while(st.top() != -1 && st.top() <= v[i]){
            st.pop();
        }
        ans[i] = st.top();
        st.push(v[i]);
    }
    return ans;
}
int main(){
    vector<int> v{8,1,7,1,0};

    for(auto val : nextGreater(v)){
        cout<<val << " ";
    }
    cout<<endl;

    return 0;
}