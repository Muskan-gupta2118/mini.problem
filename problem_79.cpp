//method overriding
#include <iostream>
using namespace std;

class Laptop {
private:
    string brand;
    int price;

public:
    Laptop() {
        brand = "HP";
        price = 40000;
    }

    Laptop(string b, int p) {
        brand = b;
        price = p;
    }

    void display() {
        cout << brand
             << " "
             << price << endl;
    }
};

int main() {
    Laptop l1;
    Laptop l2("Dell", 70000);

    l1.display();
    l2.display();

    return 0;
}