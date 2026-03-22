#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    // Default constructor
    Student() {
        name = "Unknown";
        age = 0;
    }

    // Parameterized constructor (1 parameter)
    Student(string n) {
        name = n;
        age = 0;
    }

    // Parameterized constructor (2 parameters)
    Student(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << name << " " << age << endl;
    }
};

int main() {
    Student s1;              // default
    Student s2("Rohit");    // 1 parameter
    Student s3("Mohit", 25);// 2 parameters

    s1.display();
    s2.display();
    s3.display();

    return 0;
}