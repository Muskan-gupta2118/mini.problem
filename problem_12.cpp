#include<iostream>
using namespace std;
int main(){
    char alpha;
    cout<<"Enter any character";
    cin>>alpha;
    switch(alpha){
     case 'A':
     case 'E':
     case 'I':
     case 'O':
     case 'U':
     cout<<"You enter a vowel";
     break;
     default:
     cout<<"you enter a consonant";}
    return 0;
    
}