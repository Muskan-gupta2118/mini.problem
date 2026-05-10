//constructor + overriding
#include <iostream>
using namespace std;

class Animal {
public:
    Animal() {
        cout << "Animal Constructor" << endl;
    }

    void sound() {
        cout << "Animal makes sound" << endl;
    }
};

class Dog : public Animal {
public:
    Dog() {
        cout << "Dog Constructor" << endl;
    }

    void sound() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog d1;

    d1.sound();

    return 0;
}