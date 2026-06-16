#include<iostream>
using namespace std;
class juice{
    public:
    void taste(){
        cout<<"we  have all the types of juice";
    }
};
class tofee:public juice{

};
int main(){
    tofee strawberry;
    strawberry.taste();
    return 0;
}