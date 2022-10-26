#include<iostream>
using namespace std;
class FloydTriangle
{
    public:
        int i,j,p,q,n;
        public:
        FloydTriangle() {
            cout<<"Please enter the no of rows";
            cin>>n;
            for(i=1;i<=n;i++)
            {
                if(i%2==0)
                {
                    p=1;
                    q=0;
                }
                else
                {
                    p=0;
                    q=1;
                }
            for(j=1;j<=i;j++)
            {
                if(j%2==0)
                {
                    cout<<p;
                }
                else
                {
                    cout<<q;
                }
            }
            cout<<endl;
        }
    }
    ~FloydTriangle()
    {
    }
};
int main()
{
    FloydTriangle object;
    return 0;
}