//basic encspsulation
#include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    void setMarks(int m) {
        marks = m;
    }

    void getMarks() {
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;

    s.setMarks(95);

    s.getMarks();

    return 0;
}