#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,5,3,4};
    // cout<<"arr : "<<arr<<endl;
    int *ptr = &arr[2];
    cout<<ptr<<endl;
    // *(ptr)++; // isma means address increment ++;
    // *(ptr++); // isma bhi means address increment ++;
    (*ptr)++;  // value increment ++;
    cout<<ptr<<endl;
    cout<<arr[2]<<endl;

    cout<<"arr[0] : "<<&arr[0]<<endl;
    cout<<*arr<<" ";
    cout<<*(arr+1)<<" ";
    cout<<*(arr+2)<<" ";  // Print array element 
    cout<<*(arr+3)<<" ";  
    cout<<*(arr+4);

    int i = 1;
    cout<<"\n"<<(1+i)[arr]<<endl;
    cout<<*(i+arr)<<endl; // same as i[arr]
    cout<<i;
    

    return 0;
}