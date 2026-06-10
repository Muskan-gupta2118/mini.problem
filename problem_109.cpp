#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file("new.txt",ios::app);
    file<<"\nNew data";
    file.close();
    cout<<" ok adding successfully";
    return 0;
}