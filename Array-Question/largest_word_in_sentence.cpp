#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr, n);
    cin.ignore();

    int i=0,currln=0,maxln=0,st=0,maxst=0;

    while(1){
        if(arr[i] == ' ' || arr[i] == '\0'){
            if(currln > maxln){
                maxln = currln;
                maxst = st;
            }
            currln=0;
            st = i+1;7
        }
        else{
            currln++;
        }
        if(arr[i] == '\0'){
            break;
        }
        i++;
    }
    cout<<maxln<<endl;

    for(int i=0; i<maxst; i++){
        cout<<arr[i+maxst];
    }

    return 0;
}