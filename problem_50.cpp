//single level inheritance
#include<iostream>
using namespace std;
class father{
    public:
    void show (){
        cout<<"this is the father base class"<<endl;
    }
};
class child:public father{

};
int main(){
    child c;
    c.show();
    return 0;
}