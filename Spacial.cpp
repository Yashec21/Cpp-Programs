#include<iostream>
using namespace std;

class Demo 
{
    public:
        int i ;     // chrachtristics
        float f ;   //charachtristics

        Demo()      // Constructer
        {
            cout<<"Inside constructor\n";
            i = 0;
            f = 0.0;
        }

        ~Demo()   //Destructor (~) not opreator
        {
            cout<<"Inside Destroctor\n";
        }
        
        void fun()  // behavior
        {
            cout<<"Inside fun\n";
        }
};


int main()
{
    cout<<"Inside main \n";

    Demo dobj;           //object cration
 
    cout<<"\n"<<dobj.i<<"\n";

    dobj.fun();

    cout<<"End of main \n";
    return 0;


}
