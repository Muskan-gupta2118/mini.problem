#include<stdio.h>
//write a program to find out that the given year is a leap year?
int main(){
    printf("Enter the year: ");
    int year;
    scanf("%d",&year);
    if(year%4==0||(year%100==0&&year%400!=0)){
        printf("the given year is a leap year");
}
    else{
        printf("the given year is not a leap year");
    }

}