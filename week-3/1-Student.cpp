#include <iostream>
using namespace std;

 class Student {
    string name;
    int roll_no;

    public:
    void set_name(string new_name) {
        name = new_name;
    }

    void set_roll_no(int new_roll_no) {
        roll_no = new_roll_no;
    }
 };

 int main() {
    Student john;
    john.set_name("John");
    john.set_roll_no(2);
 }
