#include<iostream>
using namespace std;
int main(){
int  num1=0,num2=1,sum;
for(int i=1;i<=25;i++){
    sum=num1+num2;
    //cout<<sum;
    num1=num2;
    num2=sum;
    cout<<sum<<endl;

}  
return 0;  
}