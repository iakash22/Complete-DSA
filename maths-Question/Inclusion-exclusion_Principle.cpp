#include<iostream>
using namespace std;
// divisible numbers
int divisible(int n,int a,int b){
    int c1 = n/a;
    int c2 = n/b;
    int c3 = n/(a*b);

    return c1+c2-c3;
}

// Great Common Diviser(GCD)
//find By euclid Algorithm
int gcd(int n1,int n2){
    while(n2 != 0){
        int rem = n1%n2;
        n1 = n2;
        n2 = rem;
    }
    return n1;
}
int gcd1(int a, int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a != b){
        if(a<b){
            b = b-a;
        }
        if(a>b){
            a = a-b;
        }
    }
    return a;
}
int main(){
    int n;
    int a,b;
    // cin>>n;
    cin>>a>>b;

    // cout<<divisible(n,a,b);
    cout<<gcd(a,b)<<endl;
    cout<<gcd1(a,b);
    return 0;
}