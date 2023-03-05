#include<bits/stdc++.h>
using namespace std;
void print(int *p){
    
    // cout<< p <<endl;   // print memmory address
    cout<< *p <<endl;   // print value

}
void update(int *p){
    // p = p+1;
    // cout<<p<<endl;
    *p = *p + 1;
}
int getsum(int *arr,int n){ //arr[]
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+= i[arr]; //arr[i];
    }
    return sum;
}
int main(){
   /* int a = 10;
    int *p=&a;
    // print(p);
    // cout<<"Before --> "<<p<<endl; // print address
    cout<<"Before --> "<<*p<<endl; // print value
    update(p);
    // cout<<"After --> "<<p<<endl; // print address
    cout<<"After --> "<<*p<<endl; // print value


    */
    int arr[5] = {1,2,3,4,5};
    cout<<"sum of -->> "<<getsum(arr+2,3)<<endl;
    return 0;
}