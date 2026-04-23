#include<iostream>
using namespace std;

// Encapsulation 

class Marvellous   
{
    //assecc specifier
    public:
    int no1, no2; //Charactristics

    void fun()   //Behaviour
    {
        cout<<"Inside fun\n";
    }

    void gun() //Behabiour
    {
        cout<<"Inside gun\n";
    }
};

int main()
{
    // object creation (Instance)
    Marvellous mobj1;
    Marvellous mobj2;

    cout<<sizeof(mobj1)<<"\n";  //8 bytes

    cout<<mobj1.no1<<"/n";

    mobj1.fun();
    mobj2.fun();
    
    mobj1.gun();

    return 0;
}