#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
class cube{
public:
int side;
};
class finding :public cube{
public:
void getdata(){
    cin>>side;
}
void display(){
    cout<<side*side*side<<endl;
}
};
class square:public cube{
    public:
    void getdata(){
        cin>>side;
    }
    
void display(){
    cout<<side*side<<endl;
}
};
int main(){
finding f;
square s;
f.getdata();
f.display();
s.getdata();
s.display();
return 0;
}