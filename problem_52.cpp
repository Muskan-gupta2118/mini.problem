#include<iostream>
using namespace std;
class father{
    public:
    void show(){
        cout<<"you can use my car"<<endl;
    }
};
class mother{
    public:
    void show(){
        cout<<"you can use my jewellary";
    }
};
class child : public father ,public mother{

};
int main(){
    child c;
    c.father::show();
    c.mother::show();
    return 0;

}