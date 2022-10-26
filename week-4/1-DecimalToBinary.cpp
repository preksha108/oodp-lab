#include <iostream>
using namespace std;

class DecimalToBinary {
    int n;
    public:
    DecimalToBinary() {
        cout << "Please enter Decimal number: ";
        cin >> n;
    }

    void convert() {
        int binaryNum[32];
 
        int i = 0;
        while (n > 0) {

            binaryNum[i] = n % 2;
            n = n / 2;
            i++;
        }

        cout << "binary number = " ;
        for (int j = i - 1; j >= 0; j--)
            cout << binaryNum[j];
    }
};

int main() {
    DecimalToBinary dToB;
    dToB.convert();
    return 0;
}