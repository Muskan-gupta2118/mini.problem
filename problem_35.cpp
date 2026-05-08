#include<iostream>
using namespace std;
 
class student{
    private:
    int age;
    public:
    void input(int a){
        age=a;
    }
    void display(){ 
        cout<<"the age is : "<<age;
    }
};
int main(){
    student s1;
    s1.input(19);
    s1.display();
    return 0;
}