//heirachical inheritance
#include<iostream>
using namespace std;
    class parents{
        public:
        void house(){
           cout<<"you can live in my house"<<endl;
        }
    };
    class son:public parents{
    
    };
    class daughter:public parents{

    };
    int main(){
        son naveen;
        daughter muskan;
        naveen.house();
        muskan.house();
        return 0;
    }