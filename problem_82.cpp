//employee role system(overriding)
#include <iostream>
using namespace std;

class Employee {
public:
    virtual void work() {
        cout << "Employee Working" << endl;
    }
};

class Developer : public Employee {
public:
    void work() override {
        cout << "Writing Code" << endl;
    }
};

class Designer : public Employee {
public:
    void work() override {
        cout << "Designing UI" << endl;
    }
};

int main() {
    Employee* e;

    Developer d;
    Designer ds;

    e = &d;
    e->work();

    e = &ds;
    e->work();

    return 0;
}