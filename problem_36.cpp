#include<iostream>
#include<string>
using namespace std;
 
class student{
    private:
    int age;
    string name;
    public:
    void input(int a,string b){
        age=a;
        name=b;
    }
    void display(){
        cout<<"the age is :"<<age<<endl;
        cout<<"the name is :"<<name;
    }
};
int main(){
    student s1;
    s1.input(19,"muskan");
    s1.display();
    return 0;
}