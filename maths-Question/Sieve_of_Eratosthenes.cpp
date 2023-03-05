#include<iostream>
using namespace std;
//check Prime Number
void primeSieve(int n){
    int prime[100] = {0}; 

    for(int i=2; i<=n; i++){

        // mark i multiple ke number
        if(prime[i] == 0){
            for(int j=i*i; j<=n; j+=i){
            prime[j]=1;
            }
        }
    }
    //print unmarked numbers
    for(int i=2; i<=n; i++){
        if(prime[i] == 0){
            cout<< i <<" ";
        }
    }cout<<endl;

}

// Prime Factor
void primefactor(int n){
    int spf[100] = {0};

    for(int i=2; i<=n; i++){
        spf[i] = i;
    }

    for(int i=2; i<=n; i++){
        if(spf[i] == i){
            for(int j = i*i; j<=n; j+=i){
                if(spf[j] = j){
                    spf[j] = i;
                }
            }
        }
    }
    //print prime factor
    while(n!=1){
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }

}

int main(){
    int n;
    cin>>n;

    primeSieve(n);
    // primefactor(n);

    return 0; 
}