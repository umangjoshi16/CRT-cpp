#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two integers (a and b): ";
    cin >> a >> b;

    // Multiply 'a' by 4 using left shift (2^2 = 4)
    a = a << 2;

    cout << "Value of a after multiplying by 4: " << a << endl;

    return 0;
}