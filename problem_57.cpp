#include<iostream>
using namespace std;
class addition{
    public:
    void sum(int a,int b){
        cout<<"the sum is "<<a+b<<endl;
    }
    void sum(int p,int q,int r){
        cout<<"the sum is "<<p+q+r;
    }
};
int main(){
   addition a;
   a.sum(4,5);
   a.sum(6,7,8);
}