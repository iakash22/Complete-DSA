#include<bits/stdc++.h>
using namespace std;
void input(int arr[],int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}
int getbit(int n, int pos){
    return ((n & (1 << pos)) != 0);
}
int Setbit(int n,int pos){
    return (n | (1 << pos));
}
int Unique3(int arr[],int n){
    int result=0;
    for(int i=0; i<64; i++){
        int sum=0;
        for(int j=0; j<n; j++){
            if(getbit(arr[j],i)){
                sum++;
            }
        }
        if(sum%3 != 0){
            result = Setbit(result, i);
        }
    }
    return result;
}
void Unique2(int arr[],int n){
    int ans = 0;
    for(int i=0; i<n; i++){
        ans = ans^arr[i];
    }
    int tempans = ans;
    int setbit=0;
    int pos=0;
    while(setbit != 1){
        setbit = ans & 1;
        pos++;
        ans = ans >> 1;
    }
    int newans=0;
    for(int i=0; i<n; i++){
        if(getbit(arr[i],pos-1)){
            newans = newans^arr[i]; 
        }
    } 
    cout<<newans<<endl;
    cout<<(newans^tempans);

}
int Unique1(int arr[],int n){
    int ans=0;
    for(int i=0; i<n; i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    input(arr,n);
    cout<<Unique1(arr,n)<<endl;
    Unique2(arr,n);
    cout<<endl;
    cout<<Unique3(arr,n)<<endl;

return 0;
}
