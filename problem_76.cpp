//fixing method hiding
#include <iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "Parent Show" << endl;
    }
};

class Child : public Parent {
public:
    void show(int x) {
        cout << "Child Show" << endl;
    }
};

int main() {
    Child c;

    // c.show();

    c.show(10);

    return 0;
}