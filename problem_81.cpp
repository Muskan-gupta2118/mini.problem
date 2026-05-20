//virtual destructor
#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {
        cout << "Base Destructor" << endl;
    }
};

class Derived : public Base {
public:
    ~Derived() {
        cout << "Derived Destructor" << endl;
    }
};

int main() {
    Base* b = new Derived();

    delete b;

    return 0;
}