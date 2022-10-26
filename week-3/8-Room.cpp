#include <iostream>
using namespace std;

class Room {
    int length;
    int breadth;
    int height;

    public:
    Room(int l, int b, int h) {
        length = l;
        breadth = b;
        height = h;
    }

    int computer_volume() {
        return (length * breadth * height);
    }

    int compute_area() {
        return 2*(length * breadth + length * height + height * breadth);
    }
};

int main() {
    Room room(3, 4, 5);
    cout << room.compute_area() << endl << room.computer_volume();
}