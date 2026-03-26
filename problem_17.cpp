#include<iostream>
using namespace std;
int main(){
    int choice;
    cout<<"choose your choice : 1. square   2. cube     3.Exit"<<endl;
    cin>>choice;
    if(choice==3){
        cout<<"exit";
    }
    else{
        int num;
        cout<<"Enter an integer : "<<endl;
        cin>>num;
        switch(choice){
            case 1:cout<<"the square of number is : "<<num*num;
            break;
            case 2:cout<<"the cube of numbers is : "<<num*num*num;
            break;
            default:
            cout<<"invalid entry";
        }
    }
return 0;
}