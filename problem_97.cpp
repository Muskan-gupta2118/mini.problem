#include<iostream>
#include<cstring>
using namespace std;
union student{
    //string name;
    char name[20];
    int rollno;
    int marks;
};
int main(){
    student s;
    strcpy(s.name,"Muskan");
    cout<<"the mame of student is :"<<s.name<<endl;
    cout<<&s.name<<endl;
    //s.name="Muskan";

    s.rollno=138;
    s.marks=500;
   // cout<<"the name of student is "<<s.name<<endl;
   // cout<<&s.name<<endl;
    cout<<"the roll no. of sudent is "<<s.rollno<<endl<<endl;
    cout<<&s.rollno<<endl;
    cout<<"the marks of student is "<<s.marks<<endl;
    cout<<&s.marks<<endl;
return 0;
}