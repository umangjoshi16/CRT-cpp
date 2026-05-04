#include<iostream>
using namespace std;
int main() {
    int n = 4;

    for (int i=1;i<=n;i++) {
        for(int j=n-1;j<=n-3;j++) {
            cout<<" ";
        }
            for (int k=1;k<=n;k++) {
                cout<<"*"<<" ";
                    
            }
            cout<<endl;
        }
        return 0;
    }