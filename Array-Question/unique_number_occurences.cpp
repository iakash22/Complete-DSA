#include<bits/stdc++.h>
using namespace std;
void Print(int *arr,int n){
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
    }
}

int main(){
    int n = 2;
    int arr[n] ={1,2};
    sort(arr,arr+n);
    vector<int>temp;
    int i=0;
    while (i<n)
    {
        /* code */
        int cnt = 1;
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]) cnt++;
            else break;
        }
        temp.push_back(cnt);
        i = i + cnt;
    }
    bool flag = true;
    for(int i=0; i<temp.size() - 1; i++){
        if(temp[i] == temp[i+1]) flag = false; break;
    }
    if(flag == false){
        cout<<flag;
    }
    else
    cout<<flag;
return 0;
}