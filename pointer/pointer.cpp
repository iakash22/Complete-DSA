#include<iostream>
using namespace std;
int main()
{
    // whta is a pointer ? ---> data type which holds the address of other datatypes.

    int a=3;
    int* b= &a;
    // & ----> (Address of) operator 
    cout<<"Address of a : "<<b<<endl;
    cout<<"Address of a : "<<&a<<endl;
    cout<<"Address of b : "<<&b<<endl;

    // * ----> (value at)dereference operator
    cout<<"the value at address b is "<<*b<<endl;

    int a = 5;
    cout<<&a<<endl;
    // int *ptr2=0;
    int *ptr2 = &a;
    cout<<*ptr2;

    // Pointer to Pointer
    int** c= &b;
    cout<<"The address of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl; 
    cout<<"the value at address value_at(value_at(c)) is :"<<**c<<endl;
    return 0;

} 