#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    char ope;
cout<<"Enter two number"<<endl;
cin>>num1>>num2;
cout<<"Enter operator"<<endl;
cin>>ope;
switch(ope){
    case '+':
    cout<<"The sum of numbers is "<<num1+num2;
    break;
    case '-':
    cout<<"The subtraction of numbers is "<<num1-num2;
    break;
    case '*':
    cout<<"The multiplication of numbers is "<<num1*num2;
    break;
    case '/':
    if(num2==0){
        cout<<"denominator should not be equals to zero";
    }
    else{
    cout<<"The quotient of numbers is "<<num1/num2 ;
    }  
    break;
    default:
    cout<<"You enter a wrong operator";                          
}
return 0;
}