#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"Enter any number betweem 1-7 for deciding day"<<endl;
    cin>>day;
    switch(day){
        case 1:cout<<"Monday";
        break;
        case 2:cout<<"tuesday";
        break;
        case 3:cout<<"wenesday";
        break;
        case 4:cout<<"thursday";
        break;
        case 5:cout<<"friday";
        break;
        case 6:cout<<"saturday";
        break;
        case 7:cout<<"sunday";
        break;
        default:
        cout<<"You enter a wrong number";
    }
}