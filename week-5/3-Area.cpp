#include <iostream>
using namespace std;

class Area {
    public:
    void printArea(int side) {
        cout << side*side*side << endl;
    }

    void printArea(int length, int breadth) {
        cout << length * breadth << endl;
    }
};

int main() {
    int side, length, breadth;
    Area a;

    cout << "Enter side: ";
    cin >> side;
    a.printArea(side);

    cout << "Enter length and breadth: ";
    cin >> length >> breadth;
    a.printArea(length, breadth);
}