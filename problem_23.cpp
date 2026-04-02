#include<iostream>
using namespace std;
int main(){
int num;
cout<<"Enter the number :"<<endl;
cin>>num;
for(int i=1;i<=num;i++){
    int square=i*i;
    cout<<"The square of "<<i<< " is "<<square<<endl;
}
return 0;
}