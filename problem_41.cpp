//parameterized constructor with inheritance
#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
    Person(string n, int a) {
        name = n;
        age = a;
    }
};

class Student : public Person {
private:
    int roll;

public:
    Student(string n, int a, int r)
        : Person(n, a)   // Calling parent constructor
    {
        roll = r;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << roll << endl;
    }
};

int main() {
    Student s1("Muskan", 19, 101);

    s1.display();

    return 0;
} 