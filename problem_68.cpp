//Atm machine
#include <iostream>
using namespace std;

class ATM {
private:
    int balance;
    int pin;

public:
    ATM() {
        balance = 5000;
        pin = 1234;
    }

    void checkBalance(int userPin) {
        if(userPin == pin) {
            cout << "Balance: "
                 << balance << endl;
        }
        else {
            cout << "Wrong PIN" << endl;
        }
    }

    void withdraw(int userPin, int amount) {
        if(userPin == pin) {
            if(amount <= balance) {
                balance -= amount;

                cout << "Withdraw Successful" << endl;
                cout << "Remaining Balance: "
                     << balance << endl;
            }
            else {
                cout << "Insufficient Balance" << endl;
            }
        }
        else {
            cout << "Wrong PIN" << endl;
        }
    }
};

int main() {
    ATM a;

    a.checkBalance(1234);

    a.withdraw(1234, 2000);

    return 0;
}