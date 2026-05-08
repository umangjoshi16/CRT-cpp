#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    // Constructor
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // Virtual function
    virtual void role() {
        cout << "Person belongs to college." << endl;
    }

    // Function to display basic details
    void display() {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
    }
};

// Derived class Teacher
class Teacher : public Person {
private:
    string department;

public:
    Teacher(string n, int a, string d)
        : Person(n, a) {
        department = d;
    }

    void role() override {
        cout << "Role : Teacher" << endl;
        cout << "Department : " << department << endl;
    }
};

// Derived class Student
class Student : public Person {
private:
    string course;

public:
    Student(string n, int a, string c)
        : Person(n, a) {
        course = c;
    }

    void role() override {
        cout << "Role : Student" << endl;
        cout << "Course : " << course << endl;
    }
};

int main() {

    Teacher t1("Rahul Sharma", 40, "Computer Science");
    Student s1("Aman Verma", 20, "B.Tech CSE");

    // Base class pointer
    Person *p;

    // Teacher details
    p = &t1;
    p->display();
    p->role();

    cout << endl;

    // Student details
    p = &s1;
    p->display();
    p->role();

    return 0;
}