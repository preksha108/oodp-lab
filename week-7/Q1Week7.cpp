#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
class student{
public:
int roll_no;
string name;
int age;
string dateofbirth;
};
class data : public student{
    public:
void getdata(){
    cin>>roll_no;
    cin>>name;
    cin>>age;
    cin>>dateofbirth;
}
void display(){
    cout<<roll_no<<endl;
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<dateofbirth<<endl;
}
};
int main(){
data d;
d.getdata();
d.display();
return 0;
}
