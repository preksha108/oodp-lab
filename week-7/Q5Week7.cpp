#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
class fruit{
protected:
int n;

};
class apple: protected fruit{
public:
void getdata(){
    cin>>n;
}
void display(){
int ans = 0.2*n;
cout<<"20 % of fruit in a basket is apple: "<<endl;
cout<<"The Number of Apple in Basket is :"<<ans<<endl;
}
};
class Mangoes:protected fruit{
public:
void getdata(){
    cin>>n;
}
void display(){
    cout<<"10 % of fruit is Mangoes :"<<endl;
    int ans = 0.1*n;
    cout<<"The Number of mangoes :"<<ans<<endl;
}
};
int main(){
apple a;
Mangoes m;
a.getdata();
a.display();
m.getdata();
m.display();

return 0;
}