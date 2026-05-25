//calculator using friend function
#include <iostream>
using namespace std;

class Calculator {
private:
    int num;

public:
    Calculator(int n) {
        num = n;
    }

    friend void square(Calculator c);
};

void square(Calculator c) {
    cout << "Square is  = "
         << c.num * c.num << endl;
}

int main() {
    Calculator c(5);

    square(c);

    return 0;
}