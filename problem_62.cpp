#include <iostream>
using namespace std;

class Parent {
public:
    int x = 50;
};

class Child : protected Parent {
public:
    void show() {
        cout << x;
    }
};

int main() {
    Child c;

    c.show();
    return 0;
}