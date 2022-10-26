#include <iostream>
using namespace std;

class AddAmount
{
    int amount;
    public:
    AddAmount()
    {
        amount = 50;
    }

    AddAmount(int a)
    {
        amount = 50;
        amount = a+amount;
    }

    ~AddAmount()
    {
        cout << amount << endl;
    }
};

int main()
{
    AddAmount a1;
    AddAmount a2(15);
    return 0;
}