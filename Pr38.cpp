#include<iostream>
using namespace std;
class Area{
    public:
    double length,breadth,side,radius;
Area(double l, double b){
    length=l;
    breadth=b;
}
Area(double s){
    side=s;
}
Area(double r){
    radius=r;
}
void display(){
    cout<<"Length: "<<length<<endl;
    cout<<"Breadth: "<<breadth<<endl;
    cout<<"Sides: "<<side<<endl;
}

}
