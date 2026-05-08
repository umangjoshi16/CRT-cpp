#include <iostream>
#include <string>
using namespace std;

class Cricketer
{
private:
    string name;
    int runs;

public:
    // Parameterized Constructor
    Cricketer(string n, int r)
    {
        name = n;
        runs = r;
    }

    // Copy Constructor
    Cricketer(const Cricketer &c)
    {
        name = c.name;
        runs = c.runs;
    }

    // Display Function
    void display()
    {
        cout << "Cricketer Name: " << name << endl;
        cout << "Total Runs: " << runs << endl;
    }
};

int main()
{

    Cricketer c1("Virat Kohli", 13000);

    Cricketer c2 = c1;

    cout << "Original Cricketer Details:" << endl;
    c1.display();

    cout << "\nCopied Cricketer Details:" << endl;
    c2.display();

    return 0;
}