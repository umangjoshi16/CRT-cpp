#include <iostream>
using namespace std;

class Student {
private:
    string name, reg_no, email;
    int roll_no;
    long long phone_no;
    float marks;
    char grade;

public:
    // Constructor
    Student(string n, int r, string reg, long long ph, float m, string e) {
        name = n;
        roll_no = r;
        reg_no = reg;
        phone_no = ph;
        marks = m;
        email = e;

        // Assign grade based on marks
        if (marks >= 90)
            grade = 'A';
        else if (marks >= 75)
            grade = 'B';
        else if (marks >= 50)
            grade = 'C';
        else
            grade = 'F';
    }

    // Function to display student details
    void display() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Registration No: " << reg_no << endl;
        cout << "Phone No: " << phone_no << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;
        cout << "Email: " << email << endl;
    }
};

int main() {
    string name, reg_no, email;
    int roll_no;
    long long phone_no;
    float marks;

    // Taking input
    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Roll No: ";
    cin >> roll_no;

    cout << "Enter Registration No: ";
    cin >> reg_no;

    cout << "Enter Phone No: ";
    cin >> phone_no;

    cout << "Enter Marks: ";
    cin >> marks;

    cout << "Enter Email: ";
    cin >> email;

    Student s1(name, roll_no, reg_no, phone_no, marks, email);

    s1.display();

    return 0;
}