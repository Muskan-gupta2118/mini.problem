//multiple inheritance
#include <iostream>
using namespace std;

class Academic {
public:
    void academic() {
        cout << "Academic Marks" << endl;
    }
};

class Sports {
public:
    void sports() {
        cout << "Sports Score" << endl;
    }
};

class Student : public Academic, public Sports {
public:
    void performance() {
        cout << "Total Performance" << endl;
    }
};

int main() {
    Student s;
    s.academic();
    s.sports();
    s.performance();
    return 0;
}