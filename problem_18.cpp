#include<iostream>
using namespace std;
int main(){
    cout<<"Enter your choice :  1. checking balance    2. deposit     3.withdrawal      4.Exit"<<endl;
    int balance,depo_amount,with_amount,choice;
    balance = 200;
    cin>>choice;
    if(choice==4){
        cout<<"Exit";
    }
    else{
        switch(choice){
            case 1:cout<<"your current balance is : "<<balance;
            break;
            case 2:
            cout<<"Enter deposit amount : "<<endl;
            cin>>depo_amount;
            cout<<"total amount is : "<<balance + depo_amount;
            break;
            case 3:
            cout<<"Enter withdrawal amount : "<<endl;
            cin>>with_amount;
            cout<<"total amount is : "<<balance-with_amount;
            break;
            default:
            cout<<"invalid number";

        }
    }

    return 0;
}