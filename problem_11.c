#include<stdio.h>
int main(){
    int number;
    int multi;
    printf("Enter the number\n");
    scanf("%d",&number);
    for(int count=0;count<=10;count++){
       multi=number*count;
       printf("%d * %d = %d\n",number,count,multi);
    }
}