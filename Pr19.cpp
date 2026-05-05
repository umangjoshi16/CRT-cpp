#include <iostream>
using namespace std;

int main() {
    double balance = 10000;  // Initial balance
    double withdraw;

    cout << "Enter withdrawal amount: ";
    cin >> withdraw;

    // Check if amount is multiple of 100
    if ((int)withdraw % 100 != 0) {
        cout << "Invalid transaction! Amount must be in multiples of 100." << endl;
    }
    // Check for sufficient balance and minimum balance condition
    else if (withdraw > balance) {
        cout << "Insufficient balance!" << endl;
    }
    else if ((balance - withdraw) < 500) {
        cout << "Transaction failed! Minimum balance of 500 must be maintained." << endl;
    }
    else {
        balance -= withdraw;
        cout << "Transaction successful!" << endl;
        cout << "Remaining balance: " << balance << endl;
    }

    return 0;
}

