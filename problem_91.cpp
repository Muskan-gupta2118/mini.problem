//swap using friend function
#include <iostream>
using namespace std;

class Swap {
private:
    int a, b;

public:
    Swap(int x, int y) {
        a = x;
        b = y;
    }

    friend void exchange(Swap &s);
};

void exchange(Swap &s) {
    int temp;

    temp = s.a;
    s.a = s.b;
    s.b = temp;

    cout << "After Swapping :" << endl;

    cout << "a = "
         << s.a << endl;

    cout << "b = "
         << s.b << endl;
}

int main() {
    Swap s(10, 40);

    exchange(s);

    return 0;
}