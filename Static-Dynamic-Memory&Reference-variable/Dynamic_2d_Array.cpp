#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;

    // creation Dynamic 2d-Array 
    int **arr = new int*[n];
    for(int i=0; i<n; i++){
        arr[i] = new int[m];
    } // done 

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    cout<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // work is done than clear heap memory 

    // delete Heap Memory   (realesing Memory) ->>
    for(int i=0; i<n; i++){
        delete [] arr[i];
    }

    delete []arr;

    cout<<endl;
    cout<<"After Realesing Memory print Array"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"done...."<<endl;
    return 0;
}