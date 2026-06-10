#include<iostream>
#include<fstream>
using namespace std;
int main(){
 ifstream file("new.txt");
 string lines;
 while(getline(file,lines)){
    cout<<lines<<endl;
 }
 file.close();
 return 0;
}