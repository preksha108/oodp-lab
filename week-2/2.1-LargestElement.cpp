#include <iostream>
#include <climits>
using namespace std;

class LargestElement {
    int n;
    int *arr;

    public:
    LargestElement(int size) {
        n = size;
        arr = new int[size];
        cout << "Enter " << size << " integers: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    void getLargestElements() {
        int largest = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (arr[i] > largest) {
                largest = arr[i];
            }
        }
        cout << "Largest Element: " << largest;
    }

};

int main() {
    LargestElement largestElement(4);
    largestElement.getLargestElements();
}