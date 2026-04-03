#include<iostream>
using namespace std;
int main(){
    int sum1=0;
    int sum2=0;
    for(int i=1;i<=100;i++){
        if(i%2==0){
            sum1=sum1+i;
        }else{
            sum2=sum2+i;
        }
    }
    cout<<"The sum of even number is "<<sum1<<endl;
    cout<<"the sun of odd number is "<<sum2;
    return 0;
}