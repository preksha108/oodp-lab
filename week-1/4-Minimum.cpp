#include <iostream>
using namespace std;

class Minimum {
    private:
    
    int num1;
    int num2;
    int num3;

    public:
    void getInputs() {
        cout << "Enter Number 1: ";
        cin >> num1;
        cout << "Enter Number 2: ";
        cin >> num2;
        cout << "Enter Number 3: ";
        cin >> num3;
    }
    
    void findMinimum() {
        if (num1 < num2) {
            if (num1 < num3) {
                cout << "Smallest Number 1: " << num1;
            } else {
                cout << "Smallest Number 3: " << num3;
            }
        } else {
            if (num2 < num3) {
                cout << "Smallest Number 2: " << num2;
            } else {
                cout << "Smallest Number 3: " << num3;
            }
        }
    }
};

int main() {
    Minimum minimum;
    minimum.getInputs();
    minimum.findMinimum();
}