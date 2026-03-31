#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter two number"<<endl;
    cin>>num1>>num2;
    float percentage =(num1*100)/num2;
    cout<<num1<< " is "<<percentage<<"% of "<<num2;
    return 0;
}