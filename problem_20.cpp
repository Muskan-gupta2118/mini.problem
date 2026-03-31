#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a 3 digit number "<<endl;
    cin>>num;
    int H= (num/100);
    int T=(num/10)%10;
    int U = (num%10);
    cout<<H<<" hundred"<<endl;
    cout<<T<<" tens"<<endl;
    cout<<U<<" units"<<endl;
    return 0;
}