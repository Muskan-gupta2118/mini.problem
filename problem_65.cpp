//encapsulation
#include <iostream>
using namespace std;

class Bank {
private:
    int balance;

public:
    void deposit(int amount) {
        balance += amount;
    }

    void showBalance() {
        cout << "Balance: "
             << balance << endl;
    }

    Bank() {
        balance = 0;
    }
};

int main() {
    Bank b;

    b.deposit(5000);

    b.showBalance();

    return 0;
}