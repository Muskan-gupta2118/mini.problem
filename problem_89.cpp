//sum of private data members
#include <iostream>
using namespace std;

class Test {
private:
    int x, y;

public:
    Test(int a, int b) {
        x = a;
        y = b;
    }

    friend int sum(Test t);
};

int sum(Test t) {
    return t.x + t.y;
}

int main() {
    Test t(5, 7);

    cout << "Sum  = "
         << sum(t);

    return 0;
}