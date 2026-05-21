#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream file;
file.open("demo.txt");
file<<"hello world";
file.close();
cout<<"file created successfully";
return 0;
}
