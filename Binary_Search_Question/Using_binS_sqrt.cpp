#include<iostream>
using namespace std;
long long int sqrtinteger(int n){
    int s = 0;
    int e = n;
    long long int ans = 0;
    while(s<=e){
        long long int mid = s + (e-s)/2;
        long long int square = mid*mid;
        if(square == n){
            return mid;
        }
        else if(square > n){
            e = mid-1;
        }
        else{
            ans = mid;
            s = mid+1;
        }
    }
    return ans;
}
double sqrtdouble(int n,int precision,int tempsqrt){
    double factor = 1;
    double ans = tempsqrt;
    for(int i = 0; i<precision; i++){
        factor = factor/10;

        for(double j = ans; j*j<n; j = j+factor){
            ans = j;
        }
    }
    return ans;
}
int main(){
    int n,precision;
    cin>>n;//>>precision;
    int tempsqrt = sqrtinteger(n);
    cout<<tempsqrt;
    // cout<<sqrtdouble(n,precision,tempsqrt);

    return 0;
}