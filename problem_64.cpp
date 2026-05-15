//mixed access specifier
#include <iostream>
using namespace std;

class A {
private:
    int a = 10;

protected:
    int b = 20;

public:
    int c = 30;

    void showPrivate() {
        cout << "a = " << a << endl;
    }
};

class B : public A {
public:
    void display() {
        // cout << a;  ERROR

        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
    }
};

int main() {
    B obj;

    obj.display();

    obj.showPrivate();

    return 0;
}