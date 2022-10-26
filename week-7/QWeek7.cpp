#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

class employee{
    public:
int salary;
int pf;
char  department[200];
};
class sal:public employee{
public:
void getdata(){
    cin>>salary;
}
int cal;
void display(){
    cal = 0.2*salary;
    cout<<cal<<endl;
}

};
class dep : public sal{
public:
void getdata(){
    // cin.getline(department,200);
    cin>>department;
}
void display(){
    cout<<department<<endl;
}
};
int main(){
sal s;
s.getdata();
s.display();
dep d;
d.getdata();
d.display();
return 0;
}