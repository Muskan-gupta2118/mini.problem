//logic system
#include <iostream>
using namespace std;

class Login {
private:
    string username;
    string password;

public:
    void setData(string u, string p) {
        username = u;
        password = p;
    }

    void checkLogin(string u, string p) {
        if(username == u && password == p) {
            cout << "Login Successful" << endl;
        }
        else {
            cout << "Invalid Username or Password" << endl;
        }
    }
};

int main() {
    Login l;

    l.setData("admin", "1234");

    l.checkLogin("admin", "1234");

    return 0;
}