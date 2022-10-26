#include <iostream>
#include <cctype>
#include <string.h>
using namespace std;

class CapitalizeFirstLetter {
    string str;

    public:
    void getInput() {
        cout << "Enter String: ";
        getline(cin, str);
    }

    void capitalizeFirstLetter() {
        for (int i = 0; i < str.length(); i++) {
            if (str[i-1] == ' ' || i == 0) {
                str[i] = toupper(str[i]);
            }
        }
        cout << str;
    }
};

int main() {
    CapitalizeFirstLetter capitalizeFirstLetter;
    capitalizeFirstLetter.getInput();
    capitalizeFirstLetter.capitalizeFirstLetter();
}