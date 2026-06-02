//student result management
#include <iostream>
using namespace std;

class Student {
protected:
    int marks1, marks2;

public:
    void getMarks(int m1, int m2) {
        marks1 = m1;
        marks2 = m2;
    }
};

class Result : public Student {
public:
    void displayResult() {
        int total = marks1 + marks2;

        cout << "Total Marks : " << total << endl;

        if(total >= 80)
            cout << "Pass" << endl;
        else
            cout << "Fail" << endl;
    }
};

int main() {
    Result r;

    r.getMarks(40, 50);

    r.displayResult();

    return 0;
}