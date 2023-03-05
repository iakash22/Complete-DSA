#include<iostream>
using namespace std;
void byTEMP(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout<<"a : "<<a<<"  "<<"b : "<<b<<endl;
}
void byXOR(int a, int b){
    a = a^b;
    b = a^b;
    a = a^b;
    cout<<"a : "<<a<<"  "<<"b : "<<b<<endl;
}
void byPlus_Minus(int a, int b){
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<"a : "<<a<<"  "<<"b : "<<b<<endl;
}
int main(){
    int a = 5;
    int b = 6;
    cout<<"a : "<<a<<"  "<<"b : "<<b<<endl;
    cout<<"After Swapping"<<endl;
    byTEMP(a,b);
    byXOR(a,b);
    byPlus_Minus(a,b);

    return 0;
}