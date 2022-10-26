#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
    int side_1;
    int side_2;
    int side_3;

    public:
    Triangle(int s1, int s2, int s3) {
        side_1 = s1;
        side_2 = s2;
        side_3 = s3;
    }

    void compute_area() {
        float s = (side_1 + side_2 + side_3) / 2;
        float area = sqrt(s*(s-side_1)*(s-side_2)*(s-side_3));
        cout << area << endl;
    }

    void compute_perimeter() {
        cout << (side_1 + side_2 + side_3) << endl;
    }
};

int main() {
    Triangle triangle(3, 4, 5);
    triangle.compute_area();
    triangle.compute_perimeter();
}