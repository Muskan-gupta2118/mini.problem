#include<iostream>
using namespace std;
int main(){
    int num,place=1,remainder,octal=0;
    cout<<"Enter the decimal number"<<endl;
    cin>>num;
    while(num>0){
        remainder = num%8;
        octal+=remainder*place;
        place=place*10;
        num=num/8;
    }
    cout<<"decimal numbers to octal is "<<octal;
    return 0;
}