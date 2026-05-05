#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int getrandomValue() {
    int value = rand()%100;
    return value;
}
int main(){
    srand(time(0));

    int result = getrandomValue();
    cout<<"The generated random number is :"<<result<<endl;
    return 0;
}