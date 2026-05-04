#include<iostream>
using namespace std;
int main(){
    int num;
    int sum =0;
    while(true){
        cout<<"Enter a number:";
        cin>>num;
        
        if(num < 0){
            break;  //terminate loop if negativenumber is entered
        }
        sum += num; //add to sum if number is positive(or zero) 
    }
    cout<<"Final sum is:"<< sum <<endl;

    return 0;
}