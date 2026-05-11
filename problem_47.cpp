#include <iostream>
using namespace std;

class Father {
public:
    void fatherSkill() {
        cout << "Father Skill" << endl;
    }
};

class Mother {
public:
    void motherSkill() {
        cout << "Mother Skill" << endl;
    }
};

class Child : public Father, public Mother {
public:
    void childSkill() {
        cout << "Child Skill" << endl;
    }
};

int main() {
    Child c;

    c.fatherSkill();
    c.motherSkill();
    c.childSkill();

    return 0;
}