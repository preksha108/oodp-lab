#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
class employee{
public:
int id_no;
string name;
int age;
string department;
};
class data :public employee{
public:
int salary ;
};
class temp: public data{
public:
int averagesalary;
void getdata(){
    cin>>id_no;
    cin>>name>>age>>department>>salary;
}
void display(){
    averagesalary  = (salary*12)/12;
    cout<<name<<endl;
    cout<<age<<" "<<department<<" "<<salary<<" "<<averagesalary<<" "<<endl;
}
};
int main(){
temp p;
p.getdata();
p.display();

return 0;
}