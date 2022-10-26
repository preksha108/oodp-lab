#include <iostream>
using namespace std;

class ReverseString {
    private:
    string str;

    public:
    void getInputs() {
        cout << "Enter string: ";
        cin >> str;
    } 

    void getReversedString() {
        string reverse = str;
        int n = str.length();
        for (int i = 0; i < n / 2; i++) {
            swap(reverse[i], reverse[n - i - 1]);
        }
        cout << "Reversed string: " << reverse;
    }
};

int main() {
    ReverseString revString;
    revString.getInputs();
    revString.getReversedString();
}