#include<iostream>
using namespace std;
class Arithematic 

{

public:
     int no1;
     int no2;

     Arithematic()
     {
        no1=0;
        no2=0;
     }

     Arithematic(int value1 , int value2)
     {
            no1=value1;
            no2=value2;
     }
     
int Addition()
{

    int Ans = 0;
    Ans = no1 + no2 ;
    return Ans;
}
int Substraction()
    {

    int Ans = 0;
    Ans = no1 - no2 ;
    return Ans;
}
};




int main()
{
    Arithematic aobj(11,10);

    int Result = 0 ;

    Result = aobj.Addition();
    cout<<"addition is :"<<Result<<"\n";

    Result = aobj.Substraction();
    cout<<"substractiom is :"<<Result<<"\n";

    return 0 ;
}