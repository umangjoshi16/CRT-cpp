#include<iostream>
using namespace std;
class Cricketers{
    public: 
    //data members 
    string name;
    int runs;
    double avg;

    //parameterized constructor 
    Cricketers(string n, int r, double avg){
        name = n;
        runs = r;
        this->avg = avg;

    }

    //member function to display cricketer details
void show(){
    cout<<"Name: "<<name<<endl;
    cout<<"Runs: "<<runs<<endl;
    cout<<"Average: "<<avg<<endl;
}
};


