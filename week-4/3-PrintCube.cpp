#include<iostream>
#include<conio.h>
using namespace std;
class PrintCube
{
    private:
        int n;
        public:
            PrintCube()
            {
                cout<<"enter the number :"<<endl;
                cin>>n;
                for(int i=1; i<=n; i++)
                {
                            cout<<" The cube of"<<i<<"is ="<<(i*i*i)<<endl;

                }
            }
            ~PrintCube()
            {
                cout<<" clear :"<<endl;
            }
        };
int main()
   {
    int p,q;
    PrintCube obj;
    getch();
}