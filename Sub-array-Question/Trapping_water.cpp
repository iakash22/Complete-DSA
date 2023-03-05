#include<bits/stdc++.h>
using namespace std;
void input(int arr[],int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}
int maxtrapping_water(int height[],int n){
    int left = 0;
    int right = n-1;
    int lftmx = 0;
    int rgtmx = 0;
    int res = 0;
    while(left<=right){
        if(height[left] <= height[right]){

            if(height[left] >= lftmx){
                lftmx = height[left];
            }
            else{
                res += lftmx - height[left];
            }
            left++;
        }
        else{

            if(height[right] >= rgtmx){
                rgtmx = height[right];
            }
            else{
                res += rgtmx - height[right];
            }
            right--;
        }
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int height[n] = {1,8,6,2,5,4,8,3,7};
    // input(height,n);

    cout<<maxtrapping_water(height,n);

    return 0;
}