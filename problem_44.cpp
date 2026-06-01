//inheritance likhe hybrid(important)
#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int id;

public:
    Employee(string n, int i) {
        name = n;
        id = i;
    }
};

class Manager : public Employee {
private:
    int teamSize;

public:
    Manager(string n, int i, int t)
        : Employee(n, i)
    {
        teamSize = t;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "ID : " << id << endl;
        cout << "Team Size: " << teamSize << endl;
    }
};

int main() {
    Manager m1("Rahul", 201, 15);

    m1.display();

    return 0;
}