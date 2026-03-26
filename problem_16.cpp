#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the numer :"<<endl;
    if(!(cin>>num)){
        cout<<"you enter an invalid number";

    }
    else{
        switch(num%2){
            case 0:cout<<"even";
            break;
            default:cout<<"odd";
        }
    }
}