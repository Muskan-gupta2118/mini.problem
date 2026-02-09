//Keep taking number as input from user until user enter an odd number.
#include<stdio.h>
#include<conio.h>
int main(){
    printf("Hello dear");
do{
    printf("Enter a number \n");
    int num;
    scanf("%d",&num);
if(num%2!=0){
    break;
}
}
while(1);
printf("Thank you");
return 0;
}