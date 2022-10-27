#include<iostream>
using namespace std;
 
class A
{
    int num_A;
          public:
             
    A()
    {
        num_A=10;
    }
    friend class B;    //friend class
};
 
class B
{
    public:
        void display(A &t)
        {
            cout<<endl<<"The value of num_A="<<t.num_A;
        }   
};
 
int main()
{
    A _a;
    B _b;
    _b.display(_a);
    return 0;
}