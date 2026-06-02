//bank account system
#include <iostream>
using namespace std;

class BankAccount {
protected:
    int balance;

public:
    BankAccount() {
        balance = 1000;
    }
};

class SavingsAccount : public BankAccount {
public:
    void deposit(int amount) {
        balance += amount;
    }

    void display() {
        cout << "Balance : "
             << balance << endl;
    }
};

int main() {
    SavingsAccount s;

    s.deposit(500);

    s.display();

    return 0;
}