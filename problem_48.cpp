//heirachical inheritance
#include <iostream>
using namespace std;

class Person {
public:
    void display() {
        cout << "I am a person" << endl;
    }
};

class Student : public Person {
};

class Teacher : public Person {
};

int main() {
    Student s;
    Teacher t;

    s.display();
    t.display();

    return 0;
}