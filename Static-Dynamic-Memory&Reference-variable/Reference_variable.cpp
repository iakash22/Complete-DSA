#include<iostream>
using namespace std;
void update(int n){  // create new addres  (Copy create)
    n++;
    // cout<<"update function n address : "<<&n<<endl;// address -> 0x22955ffa10
}
void update2(int& n){ // Pass by value
    n++;
    // cout<<"update function n address : "<<&n<<endl;  // address -> 0xebd15ffaf4
}
int& fun(int num){
    int a = num;
    a++;
    int& ans = a;
    return ans;
}
int main(){
    int i = 5;
    int &j = i;  // Reference varible syntax

    cout<<i<<endl;  // output 22
    cout<<j<<endl; // output 22

    cout<<"size of i : "<<sizeof(i)<<endl;
    cout<<"size of j : "<<sizeof(j)<<endl;
    cout<<endl;
    cout<<"address of i : "<<&i<<endl;
    cout<<"address of j : "<<&j<<endl;

    i++;
    cout<<i<<endl; //6
    j++;
    cout<<i<<endl; //7
    cout<<j<<endl; //7

    int n = 5;
    // cout<<"Before n : "<<n<<endl;
    // // update(n);     //-->> 5   
    // update2(n);      // -->> 6
    // // cout<<"main function n address : "<<&n<<endl; // address -> 0xebd15ffaf4
    // cout<<"After n : "<<n<<endl;


    cout<<fun(n);
    return 0;
}