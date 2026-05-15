//protected member
#include <iostream>
using namespace std;

class Employee {
protected:
    int salary;
};

class Manager : public Employee {
public:
    void setSalary(int s) {
        salary = s;
    }

    void display() {
        cout << "Salary: "
             << salary << endl;
    }
};

int main() {
    Manager m;

    m.setSalary(50000);

    m.display();

    return 0;
}