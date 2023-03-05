// An Array is a collection of items of similar type stored in contigous memory locations
   #include<iostream>
   using namespace std;
   int main()
   {
   //const 
   int marks[4]={23,45,56,89};

    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    // marks[2]=0;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    // cout<<&marks;

    cout<<"<----Array Print by for loop---->"<<endl;
    for(int i=0; i<4; i++){
        cout<<marks[i]<<endl;
    }
    cout<<"<----Array Print by while loop---->"<<endl;
    int i =0;
    while(i<4){
        cout<<marks[i]<<endl;
        i++;
    }
    cout<<"<----Array Print By Do while Loop---->"<<endl;
        
        int j=0;
    do{
        cout<<marks[j]<<endl;
        j++;
    }while(j<4);
   }