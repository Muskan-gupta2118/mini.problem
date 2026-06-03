//maximum using freind function
#include <iostream>
using namespace std;

class Number {
private:
    int a, b;

public:
    Number(int x, int y) {
        a = x;
        b = y;
    }

    friend void maximum(Number n);
};

void maximum(Number n) {
    if(n.a > n.b)
        cout << "Maximum : "
             << n.a << endl;

    else
        cout << "Maximum: "
             << n.b << endl;
}

int main() {
    Number n(10, 20);

    maximum(n);

    return 0;
}