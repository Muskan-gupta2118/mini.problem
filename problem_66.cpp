//constructor + access specifier 
#include <iostream>
using namespace std;

class Person {
private:
    string password;

protected:
    string name;

public:
    Person(string n, string p) {
        name = n;
        password = p;
    }

    void showPassword() {
        cout << password << endl;
    }
};

class Student : public Person {
public:
    Student(string n, string p)
        : Person(n, p)
    {
    }

    void display() {
        cout << "Name: "
             << name << endl;
    }
};

int main() {
    Student s("Muskan", "abc123");

    s.display();

    s.showPassword();

    return 0;
}