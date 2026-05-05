#include<iostream>
using namespace std;
int main(){
    
    int choice;
    cout<<"==== Customer Support System Menu ===="<<endl;
    cout<<"1. General Support"<<endl;
    cout<<"2. Billing"<<endl;
    cout<<"3. Technical Support"<<endl;
    cout<<"4. Speak to Agent" <<endl;
    cout<<"Enter your choice(1-4)";
    cin>>choice;

    switch(choice){
        case 1:
           cout<<"You selected general support , how can we assist you?"<<endl;
           break;
        case 2:
           cout<<"You selected Billing, Please check your invoices or payment details."<<endl;
           break;
        case 3:
           cout<<"You selected Technical support , Please describe your technical issue."<<endl;
           break;
        case 4:
           cout<<"Connecting you to live agent. . . "<<endl;
           break;
        default:
        
           cout<<"Invalud choice ! Please select a valud option(1-4)."<<endl;
           
      }
      return 0;
}