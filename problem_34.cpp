#include<iostream>
using namespace std;
 
class student{
    private:
    char name[20];
    int age;
    public:
    void input(){
        cout<<"Enter name :"<<endl;
        cin>>name;
        cout<<"Enter age :";
        cin>>age;
    }
    void display(){
        cout<<"the name of student is "<<name<<endl;
        cout<<"the age is  "<<age;
    }
};
int main(){
    student muskan;
    muskan.input();
    muskan.display();
    return 0;
}
