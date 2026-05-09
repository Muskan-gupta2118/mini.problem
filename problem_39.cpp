#include<iostream>
using namespace std;
class student{
    private:
    int num;
   
    public:
    void input(int a){
        num=a;
        cout<<"the age is "<<num;

    }


} ;
class child:public student{};
int main(){
    child c;
    c.input(19);
    return 0;
}