//employee salary system
#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int basicSalary;

public:
    Employee(string n, int s) {
        name = n;
        basicSalary = s;
    }
};

class Manager : public Employee {
private:
    int bonus;

public:
    Manager(string n, int s, int b)
        : Employee(n, s)
    {
        bonus = b;
    }

    void totalSalary() {
        cout << "Manager Name : " << name << endl;
        cout << "Total Salary: "
             << basicSalary + bonus << endl;
    }
};

int main() {
    Manager m1("Rahul", 50000, 10000);

    m1.totalSalary();

    return 0;
}