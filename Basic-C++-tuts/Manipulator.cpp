#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 1, b = 12, c = 123;

    cout << "The value of a :" << a << endl;
    cout << "The value of b :" << b << endl;
    cout << "The value of c :" << c << endl;

    cout << "The value of a : with setw" << setw(4) << a << endl;
    cout << "The value of b : with setw" << setw(4) << b << endl;
    cout << "The value of c : with setw" << setw(4) << c << endl;
}