#include<iostream>
using namespace std;
class person{
    private:
    int x;
    public:
    void  input(){
        x=10;
    }
    friend void show(person p);
};
void show(person p){
        cout<<"the value of x is : "<<p.x;
    }
int main(){
    person p;
    p.input();
    show(p);
    return 0;
}