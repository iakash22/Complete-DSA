#include<bits/stdc++.h>
using namespace std;
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
void input(int arr[],int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}
vector<int> reverse(vector<int> v){
    int s = 0; 
    int e = v.size() - 1;
    while(s<e){
        swap(v[s++],v[e--]);
    }
    return v;
}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m){
    int i = n-1;
    int j = m-1;
    int carry = 0;
    vector<int> ans;

    while(i>=0 && j>=0){
        int sum = a[i] + b[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }

    // First Case -->>
    while(i>=0){
        int sum = a[i]+carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--; 
    }
    while(j>=0){
        int sum = b[j]+carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--; 
    }
    while(carry != 0){
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum); 
    }

    return reverse(ans);

}
int main(){
    vector<int> a,b;


    findArraySum(a,n,b,m);
    return 0;
}