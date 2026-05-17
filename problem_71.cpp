//constructor overloading
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student() {
        name = "Unknown";
        age = 0;
    }

    Student(string n) {
        name = n;
        age = 18;
    }

    Student(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << name << " "
             << age << endl;
    }
};

int main() {
    Student s1;
    Student s2("Muskan");
    Student s3("Rahul", 21);

    s1.display();
    s2.display();
    s3.display();

    return 0;
}