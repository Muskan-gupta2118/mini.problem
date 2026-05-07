#include <iostream>
using namespace std;
class student{
    int age;
    public:
    student(){
    cout<<"this is default constructor"<<endl;
    }
    student  (int a){
        age = a;
        cout<<"this is paramaterized constructor"<<endl;
    }
    student(student &s){
        age=s.age;
        cout<<"this is copy constructor"<<endl;
    }
    void display(){
        cout<<"the age is"<<age<<endl;
    }
    ~student(){
    cout<<"Destructor is created"<<endl;
}
};
int main (){
    student s1;
    student muskan(19);
    student utkarsh=muskan;
    muskan.display();
    utkarsh.display();
}