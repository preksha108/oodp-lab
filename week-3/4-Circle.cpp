#include <iostream>
#include <cmath>
using namespace std;

class Circle {
    float radius;

    public:
    Circle(float new_radius) {
        radius = new_radius;
    }

    float compute_area() {
        return M_PI * radius * radius;
    }

    float compute_perimeter() {
        return 2 * M_PI * radius;
    }
};

int main() {
    Circle circle(5);
    cout << circle.compute_area() << endl;
    cout << circle.compute_perimeter() << endl;
}