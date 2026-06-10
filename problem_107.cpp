//file handling
#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream file("new.txt");
file<<"hello world";
file.close();
cout<<"Data written successfully ";
return 0;
}
