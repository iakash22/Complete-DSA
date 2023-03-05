#include<iostream>
using namespace std;
class A{

    // properties
    private:
    int health;

    public:
    char level;

    // void print(){
    //     cout<<level<<endl;
    // }

    // Access private obj -->> Help to set and get function in public
    // homeWork
    // Read -->> Padding, greedy alinment
    void setHealth(int h){
        health = h;
    }
    
    int getHealth(){
        return health;
    }
};
int main(){
    // static allocation
    A obj;
    obj.setHealth(10);   
    cout<<obj.getHealth()<<endl;
    // Dynamically
    A *objptr = new A;
    objptr->setHealth(15);
    cout<<(*objptr).getHealth();
    // cout<<objptr->getHealth();





    // obj.level = 'a';
    // // obj.print();
    // obj.setHealth(5);
    // cout<<obj.getHealth();
    

}