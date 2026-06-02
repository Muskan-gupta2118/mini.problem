#include <iostream>
using namespace std;

class Parent {
public:
    int x = 30;
};

class Child : private Parent {
public:
    void display() {
        cout << x;
    }
};

int main() {
    Child c;

    c.display();

    return 0;
}