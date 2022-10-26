#include <iostream>
using namespace std;

class Calculator {

    private:

    int num1;
    int num2;

    void add() {
        cout << "Number 1 + Number 2 = " << num1 + num2;
    }

    void subtract() {
        cout << "Number 1 - Number 2 = " << num1 - num2;
    }

    void multiply() {
        cout << "Number 1 x Number 2 = " << num1 * num2;
    }

    void divide() {
        cout << "Number 1 / Number 2 = " << num1 / num2;
    }

    void moduluo() {
        cout << "Number 1 % Number 2 = " << num1 % num2;
    }

    public:

    void getInputs() {
        cout << "Enter number 1: ";
        cin >> num1;
        cout << "Enter number 2: ";
        cin >> num2;
    }

    void getOperation() {
        int operation;
        cout << "Enter operation to perform: ";
        cin >> operation;
        switch (operation) {
            case 1:
                add();
                break;
            case 2:
                subtract();
                break;
            case 3:
                multiply();
                break;
            case 4:
                divide();
                break;
            case 5:
                moduluo();
                break;
            default:
                cout << "Invalid Operation";
                break;
        }
    }
};

int main() {
    Calculator calculator;
    calculator.getInputs();
    calculator.getOperation();
}
