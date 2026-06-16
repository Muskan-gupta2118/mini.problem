//heirachical inheritance
#include <iostream>
using namespace std;

class Shape {
public:
    void show() {
        cout << "Shape  Class" << endl;
    }
};

class Rectangle : public Shape {};
class Circle : public Shape {};

int main() {
    Rectangle r;
    Circle c;

    r.show();
    c.show();

    return 0;
}