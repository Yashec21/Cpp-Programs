#include<iostream>
using namespace std;

// Encapsulation 

class Marvellous   
{
    //assecc specifier
    public:
    int no1, no2; //Charactristics

    Marvellous()//defalut cons 
    {

        cout<<"Inside default constructor\n";
        no1 = 0;
        no2 = 0;

    }
    Marvellous(int A, int B)//parame
    {

        cout<<"Inside parametri constructor\n";
        no1 = A;
        no2 = B;
    }

    Marvellous(Marvellous &ref) // copy 
    {

         cout<<"Inside copy constructor\n";
         no1 = ref.no1;
         no2 = ref.no2; //ref topan name 

    }
    ~Marvellous()

    {
        cout<<"Inside distructor\n";

    }
};

int main()
{
    cout<<"inside main\n";

    Marvellous mobj1();               //defalt
    Marvellous mobj2(11,21);        //parametrised
    Marvellous mobj3(mobj2);    //copy

    cout<<"end of main \n";
    return 0;
}//all destructers gets called