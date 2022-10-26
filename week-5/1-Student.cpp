#include <iostream>
#include <string>
using namespace std;

class Student
{
    string name;
    public:
    Student(string s= "Unknown")
    {
        name = s;
        cout << name << endl;
    }
};

int main()
{
    Student s1("John");
    Student s2;
    return 0;
}