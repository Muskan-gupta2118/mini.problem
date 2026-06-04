#include<iostream>
#include<string>
using namespace std;
struct student{
    string name;
    int rollno;
    int marks;


};
int main(){
    student s;
    s.name="Muskan";
    s.rollno=138;
    s.marks=500;
    cout<<"the name of student is "<<s.name<<endl;
    cout<<"the roll no. of sudent is "<<s.rollno<<endl<<endl;
    cout<<"the marks of student is "<<s.marks;
return 0;
}