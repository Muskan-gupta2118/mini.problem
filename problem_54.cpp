//hybrid inheritance
#include<iostream>
using namespace std;
class grandparent{
    public:
    void house(){
        cout<<"you can live in my house"<<endl;
    }
};
class father:public grandparent{
    public:
    void future(){
        cout<<"you should be on a government post"<<endl;
    }
};
class mother:public grandparent{
    public:
    void skin(){
        cout<<"you can take my skintone"<<endl;

    }
};
class child:public father,public mother{

};
int main(){
   child utkarsh;
   utkarsh.father::house();
   utkarsh.future();
   utkarsh.skin();
   return 0;
}