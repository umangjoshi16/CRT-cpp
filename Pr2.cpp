#include <iostream>
using namespace std;

// Global variable
int num;

int main() {
    int userInput;
    double result;

    // Initialize global variable in main
    num = 200;

    cout << "Enter a number: ";
    cin >> userInput;

    // Floating point division using explicit type casting
    result = (double)num / userInput;

    cout << "Result after division: " << result << endl;

    return 0;
}