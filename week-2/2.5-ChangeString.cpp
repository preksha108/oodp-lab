#include <iostream>
using namespace std;

class ChangeString {
    string str;

    public:
    void getInput() {
        cout << "Enter string: ";
        cin >> str;
    }

    void changeString() {
        for (int i = 0; i < str.length(); i++) {
            str[i] += 1;
        }
    }

    void printString() {
        cout << str;
    }
};

int main() {
    ChangeString changeString;
    changeString.getInput();
    changeString.changeString();
    changeString.printString();
    return 0;
}