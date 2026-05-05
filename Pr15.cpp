#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the percentage ( 0 - 100 ) :"<<endl;
    cin>>num;
    if(num<0 || num >100){
        cout<<"Invalid input! Please enter a value between 0 and 100."<<endl;

    }

    else if(num>90){
            cout<<"Grade A"<<endl;

    }
    else if(num>=80){
            cout<<"Grade B"<<endl;

    }else if (num>=70){
        cout<<"Grade C"<<endl;

    }else if(num>=60){
        cout<<"Grade D"<<endl;

    }else if(num>= 50){
        cout<<"Grade E"<<endl;

    }else{
        cout<<"fail"<<endl;
    }
    return 0;
    }

    
