#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    int age;
   string name;
    void input(int a,string b){
        age=a;
        name=b;
        cout<<"the age is "<<age<<endl;
        cout<<"the name is "<<name;
    }


} ;
class child:public student{};
int main(){
    child c;
    c.input(19,"muskan");
    return 0;
}