#include<iostream>
using namespace std;
class ReverseNumber
{
    private:
        int n;
    public:
    ReverseNumber()
    {
        cout<<"Enter number to reverse: ";
        cin>>n;
        cout<<endl<<"The reverse of the Entered number: ";
        for(int i=n;n>0;n=n/10)
        {
            cout<<n%10;
        }
    }
};
int main()
{
    ReverseNumber r;
}