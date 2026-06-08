//multilevel inheritance
#include <iostream>
using namespace std;

class Person {
public:
    void displayPerson() {
        cout << "Person Details" << endl;
    }
};

class Student : public Person {
public:
    void displayStudent() {
        cout << "Student Details" << endl;
    }
};

int main() {
    Student s;
    s.displayPerson();
    s.displayStudent();
    return 0;
}