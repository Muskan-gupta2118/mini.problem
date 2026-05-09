#include<iostream>
using namespace std;
class student{
    public:
    int age;
   
    public:
    void input(int a){
        age=a;
        cout<<"the age is "<<age;

    }


} ;
class child:public student{};
int main(){
    child c;
    c.input(19);
    return 0;
}