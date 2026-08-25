#include<iostream>
using namespace std;
class juice{
    public:
    void taste(){
        cout<<"we  have all the types of juices";
    }
};
class tofee:public juice{

};
int main(){
    tofee strawberry;
    strawberry.taste();
    return 0;
}