#include<bits/stdc++.h>
using namespace std;
// bool sum(int arr[],int n,int key){
//     int i=0,ans=0;
//     while(i<n){
//         int j=i;
//         while (j<n)
//         {
//             ans +=arr[j];
//             if(ans == key){
//                 cout<< i+1 <<" "<< j+1<<endl;
//                 return true;
//             } 
//             else if(ans > key){
//                 ans = 0;
//                 i++;
//                 break;
//             }
//             j++;
//         }
//     }
//     return false;
// }
int main()
{
    int n,s;
    cin>>n>>s;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int i=0,j=0,st=-1,en=-1,sum=0;

    while(j<n && sum+arr[j] <= s ){
        sum+=arr[j];
        j++;
    }
    if(s == 0){
        cout<<-1;
        return 0;
    }
    if(sum == s){
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }
    while(j<n){
        sum+=arr[j];
        while(sum>s)
        {
            sum -= arr[i];
            i++;
        }
        if(sum==s){
            st = i+1;
            en = j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en<<endl;
    return 0;
}