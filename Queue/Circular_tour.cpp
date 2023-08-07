#include<iostream>
#include<vector>
using namespace std;
// given a set  ->>>
// set in two arr first one is show petrol and Second is distance 
// set{Petrol[1,5,46,46];
// distance[,5,1,55,1,1];}
// you write a function to give starting point(index) of set to complete circular tour
int arraySum(vector<int>& arr){
    int n = arr.size();
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}
int canCompleteCircuit(vector<int> &gas,vector<int> &cost) {
        if(arraySum(gas) < arraySum(cost)) return -1;
        int n = gas.size();
        int answer = 0;
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += (gas[i] - cost[i]);
            if(sum < 0){
                sum = 0;
                answer = i+1;
            }
        }
        return answer;
    }
int petrol;
int distance;
int circularTour(int n){
    int start = 0;
    int remainingPetrol = 0;
    int d = 0;
    for(int i=0; i<n; i++){
        remainingPetrol += petrol.[i] - distance.[i];
        if(remainingPetrol < 0){
            d += remainingPetrol;
            start = i+1;
            remainingPetrol = 0; 
        }
    }
    if(remainingPetrol + d >= 0) return start;
    else return -1;
}
int main(){


    return 0;
}