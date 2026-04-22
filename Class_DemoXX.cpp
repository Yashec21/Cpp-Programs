#include<iostream>
using namespace std;

class Demo 
{
    public:
        int i ;     // chrachtristics
        float f ;   //charachtristics

        void fun()  // behavior

        {
            cout<<"Inside fun\n";
        }
};


int main()
{

    Demo dobj;
    cout<<dobj.i<<"\n";

    dobj.fun();
    return 0;

}
