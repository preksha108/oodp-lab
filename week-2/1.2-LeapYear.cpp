#include <iostream>
using namespace std;

class LeapYear {
    int year;

    public:
    void getInput() {
        cout << "Enter year: ";
        cin >> year;
    }

    void leapYearOrNot() {
        if ((year%400==0 || year%100!=0) &&(year%4==0)) {
            cout << "Leap Year";
        } else {
            cout << "Not a Leap Year";
        }
    }
};

int main () {
    LeapYear leapYear;
    leapYear.getInput();
    leapYear.leapYearOrNot();
}