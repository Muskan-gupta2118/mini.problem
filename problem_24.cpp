#include <iostream>
using namespace std;

int main() {
    int n, binary = 0, place = 1, remainder;

    cout << "Enter a decimal number: ";
    cin >> n;

    while (n > 0) {
        remainder = n % 2;
        binary += remainder * place;
        place *= 10;
        n /= 2;
    }

    cout << "Binary equivalent: " << binary;

    return 0;
}