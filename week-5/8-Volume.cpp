#include<iostream>
using namespace std;

class Volume {
    public:
    float cube(float side) {
        return side*side*side;
    }

    float cylinder(float r, float h) {
        return 3.14*r*r*h;
    }

    float sphere(float r) {
        return (4.0/3.0)*3.14*r*r*r;
    }
};

int main() {
    Volume v;

    float side;
    cout << "Enter side of cube: ";
    cin >> side;
    cout << v.cube(side) << endl;

    float r, h;
    cout << "Enter radius and height of cylinder: ";
    cin >> r >> h;
    cout << v.cylinder(r, h) << endl;

    float r_sphere;
    cout << "Enter radius of sphere: ";
    cin >> r_sphere;
    cout << v.sphere(r_sphere) << endl;

    return 0;
}
