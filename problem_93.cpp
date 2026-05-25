#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream file;
file.open("new.txt");
file<<"this is a new file";
file.close();
return 0;
}