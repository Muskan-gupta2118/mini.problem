#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream file;
file.open("new.txt");
file<<"editing file";
file.close();
return 0;
}