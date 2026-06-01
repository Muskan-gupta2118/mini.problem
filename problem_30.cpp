//copy constractor
#include <iostream>
using namespace std;
class student{
    int age;
    public:
    student  (int a){
        age = a;
    }
    student(student &s){
        age=s.age;
    }
    void display(){
        cout<<"the age is "<<age<<endl;
    }
};
int main (){
    student muskan(19);
    student utkarsh=muskan;
    muskan.display();
    utkarsh.display();

}