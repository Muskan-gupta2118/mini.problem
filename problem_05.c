#include<stdio.h>
int main(){
   int a;
   printf("Enter the value of a\n");
   scanf("%d",&a);
   if (a%2==0){
    printf("%d id even number",a);
   }
   else{
    printf("%d is odd number",a);
   }

    return 0;
}