// Its a Amazon Question
#include<bits/stdc++.h>
using namespace std;
void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
int missing_number(int arr[],int n){
    int i = 0;
    while(i<n){
        int correct = arr[i];  // because index nth is not existing
        if(arr[i] < n && arr[i] != arr[correct]){   // arr[correct] -->> arr[arr[i]] 
            swap(arr[i],arr[correct]);
        }
        else{
            i++;
        }
    }

    for(int index=0; index<n; index++){
        if(arr[index] != index){
            return index;
        }
    }
    return n;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    input(arr, n);

    cout<<missing_number(arr, n);
    return 0;
}