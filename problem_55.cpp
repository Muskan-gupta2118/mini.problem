//constructor in inheritance
#include<iostream>
using namespace std;
class grandparent{
    public:
    grandparent(){
        cout<<"you can live in my house"<<endl;

    }
};
class parent:public grandparent{
    public:
    parent(){
        cout<<"parent class"<<endl;
    }
};
int main(){
    grandparent gp;
    parent p1;
}
