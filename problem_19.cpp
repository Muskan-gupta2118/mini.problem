#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character"<<endl;
    cin>>ch;
    char lw = ch+32;
    cout<<"the lowercase value of "<<ch<<" is "<<lw;
    return 0;
}