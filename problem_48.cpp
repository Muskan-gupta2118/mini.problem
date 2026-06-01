//heirachical inheritance
#include <iostream>
using namespace std;

class Person {
public:
    void display() {
        cout << "I am a kindsoul person" << endl;
    }
};

class Student : public Person {
};

class faculty : public Person {
};

int main() {
    Student s;
    faculty t;

    s.display();
    t.display();

    return 0;
}