//basic freind function
#include <iostream>
using namespace std;

class Box {
private:
    int width;

public:
    Box() {
        width = 10;
    }

    friend void show(Box b);
};

void show(Box b) {
    cout << "Width is: "
         << b.width << endl;
}

int main() {
    Box b;

    show(b);

    return 0;
}