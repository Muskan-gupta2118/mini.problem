//file handling
#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream file("new.txt");
file<<"hello dearrr";
file.close();
cout<<"Data  written successfully ";
return 0;
}
