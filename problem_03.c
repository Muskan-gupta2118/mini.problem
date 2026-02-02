#include<stdio.h>
#include<string.h>
//write a programme to swap two number.
int main(){
    int a;
    int b;
    printf("Enter the value of a and b\n");
    scanf("%d\n %d",&a,&b);
    int x;
    x=a;
    a=b;
    b=x;
    printf("the value of a is %d and the value of b is %d",a,b);
    
    return 0;
    
}