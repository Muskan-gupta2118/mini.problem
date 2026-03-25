#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of 5 subjects"<<endl;
    int mark1,mark2,mark3,mark4,mark5,to_mark,percentage;
    cin>>mark1>>mark2>>mark3>>mark4>>mark5;
    to_mark=mark1+mark2+mark3+mark4+mark5;
    percentage=to_mark/5;
    cout<<"Your percentage is-"<<percentage<<"%"<<endl;
    int grade;
    if(percentage>=90&&percentage<=100){
        grade='A';
    }
    else if(percentage>=80&&percentage<90){
        grade='B';
    }
    else if(percentage>=70&&percentage<80){
        grade='C';
    }
    else{
        grade='D';
    }
    switch(grade){
        case 'A':
        cout<<"Grade A";
        break;
        case 'B':
        cout<<"Grade B";
        break;
        case 'C':
        cout<<"Grade C";
        break;
        case 'D':
        cout<<"fail";
        break;
        default:
        cout<<"you enter wrong number please try again";
    }

}