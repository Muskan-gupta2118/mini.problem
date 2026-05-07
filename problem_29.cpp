//paramaterized constractor
#include <iostream>
using namespace std;
class student{
    int age;
    public:
    student  (int a){
        age = a;
        cout<<"the age is "<<age<<endl;
    }
    void display(){
        cout<<"hello";
    }
};
int main(){
    student s1(30);
    s1.display();
}