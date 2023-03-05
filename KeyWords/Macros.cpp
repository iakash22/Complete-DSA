#include<iostream>
using namespace std;
// Macro is a Piece of code in a program that is replaced by value of macro
#define PI 3.14   // Macro key word

int main(){
    int r =5;
    // double pi = 3.14;  // Extra storage 
    double area = PI * r * r;
    // PI = PI + 1;    // Error.... 
    cout<<"Area is  "<<area<<endl;
    return 0;
}