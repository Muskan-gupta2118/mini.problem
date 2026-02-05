#include<stdio.h>
int main(){
   int a,b,c;
   printf("enter th value of A,B,C respectively\n");
   scanf("%d\n %d\n %d",&a,&b,&c);
   if(a>b&&a>c){
    printf("a is gretest");
   }
   else if(b>a&&b>c){
    printf("b is gretest");
   }
   else{
    printf("c is gretest");
   }
}