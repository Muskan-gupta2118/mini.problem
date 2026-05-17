//area calculator using overloading
#include <iostream>
using namespace std;

class Area {
public:
    int calculate(int side) {
        return side * side;
    }

    int calculate(int length, int breadth) {
        return length * breadth;
    }

    double calculate(double radius) {
        return 3.14 * radius * radius;
    }
};

int main() {
    Area a;

    cout << "Square Area: "
         << a.calculate(4) << endl;

    cout << "Rectangle Area: "
         << a.calculate(4, 5) << endl;

    cout << "Circle Area: "
         << a.calculate(2.5) << endl;

    return 0;
}