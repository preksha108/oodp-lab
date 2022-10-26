#include <iostream>
using namespace std;

class NegativeOrPositive {
    int number;

    public:
    void getInput() {
        cout << "Enter Number: ";
        cin >> number;
    }

    void positiveOrNegative() {
        if (number > 0) {
            cout << "Positive";
        } else if (number < 0) {
            cout << "Negative";
        } else {
            cout << "Zero";
        }
    }
};

int main() {
    NegativeOrPositive negativeOrPositive;
    negativeOrPositive.getInput();
    negativeOrPositive.positiveOrNegative();
}