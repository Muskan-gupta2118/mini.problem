#include<stdio.h>
//Write prorgramme to convert given days into years(365),weeksand days. 
int main(){
  int givendays;
  printf("Enter the days\n");
  scanf("%d",&givendays);
  int years=givendays/365;
  int remainingdays=givendays%365;
  int weeks=remainingdays/7;
  remainingdays=remainingdays%7;
  printf("%d have %d years,%d weeks and %d remaining days",givendays,years,weeks,remainingdays);
    return 0;
}