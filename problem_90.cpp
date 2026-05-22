//friend function betweem two classes
#include <iostream>
using namespace std;

class B;

class A {
private:
    int numA;

public:
    A() {
        numA = 10;
    }

    friend void add(A, B);
};

class B {
private:
    int numB;

public:
    B() {
        numB = 20;
    }

    friend void add(A, B);
};

void add(A a, B b) {
    cout << "Sum = "
         << a.numA + b.numB << endl;
}

int main() {
    A obj1;
    B obj2;

    add(obj1, obj2);

    return 0;
}