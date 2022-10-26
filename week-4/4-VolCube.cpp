#include<iostream>
using namespace std;

class VolCube
{
    int side;

    public:
    VolCube() {
        cin >> side;
        cout << (side*side*side);
    }
    
    ~VolCube() {
        cout << "\nDestructing " <<  endl;
    }
};

int main() {
    VolCube c;
    return(0);
}