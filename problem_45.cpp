#include<iostream>
using namespace std;
int main(){
    char num=127;
    num++;
    cout<<"the num is : "<<(int)num;
    return 0;

}

//in char , its limit tend to -128 to 127 
//so after 127, it bck to the smallest number