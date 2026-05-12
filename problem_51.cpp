//multilevel inheritnce
#include <iostream>
using namespace std;
class grandparent{
    public:
    void surname(){
        cout<<"you can use my surname"<<endl;
    }
};
class parent:public grandparent{
    public:
    void house(){
        cout<<"you can live in house"<<endl;
    }
    protected:
    int num;
} ;
class child :public parent{
    public:
    void property(){
    cout<<"enter the number";
    cin>>num;
    cout<<"the number of property :"<<num<<endl; 
 }
};
int main(){
    child c;
    c.surname();
    c.house();
    c.property();


}