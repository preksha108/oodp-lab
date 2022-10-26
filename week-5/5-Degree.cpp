#include <iostream>
using namespace std;

class Degree{
    public:
    Degree()
    {
        cout<<"I got a degree."<<endl;
    }
};
class Undergraduate:public Degree{
    public:
    Undergraduate()
    {
        cout<<"I am an Undergraduate"<<endl;
    }
};
class Postgraduate:public Degree{
    public:
    Postgraduate() {
        cout<<"I am a Postgraduate";
    }
};

int main()
{
    Undergraduate u;
    Postgraduate p;
    return 0;
}