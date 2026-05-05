#include <iostream>
using namespace std;

void applyDiscount(float &bill) {
    bill = bill - (0.10 * bill);
}

int main() {
    float bill;

    cout << "Enter total bill amount: ";
    cin >> bill;

    applyDiscount(bill); 

    cout << "Updated bill after 10% discount: " << bill << endl;

    return 0;
}