#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a 3 digit number "<<endl;
    cin>>num;
    int H= (num/100);
    int T=(num/10)%10;
    int U = (num%10);
    cout<<H<<" hundred place :"<<endl;
    cout<<T<<" tens place :"<<endl;
    cout<<U<<" units place :"<<endl;
    return 0;
}