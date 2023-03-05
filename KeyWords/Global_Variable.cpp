#include<iostream>
using namespace std;
// Bad Practice
// Any Function change Global variable value
int score = 15; // Global variable

void a(int i){
    char ch = 'a';  // Local variable 
    cout<< score << " in a"<<endl;
    // score = score + 10;  // changeable Global Varible 
    cout<< i <<endl;
    // b(i);
}
void b(int &i){
    cout<< score << " in b"<<endl;
    cout<< i <<endl;
}
int main(){

    int i = 5; 
    cout<< score << " in main"<<endl;
    a(i);
    b(i);
    // {
    //     int i = 2;
    //     cout<< i <<endl;
    // }
    // cout<< i <<endl;

    return 0;
}