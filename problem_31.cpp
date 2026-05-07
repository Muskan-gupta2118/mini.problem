//distractor
#include <iostream>
using namespace std;
class student{
    public:
    student(){
        cout<<"Constructor  is created"<<endl;
    }

~student(){
    cout<<"Destructor is created"<<endl;
}
};
int main(){
    student muskan;
    return 0;
}