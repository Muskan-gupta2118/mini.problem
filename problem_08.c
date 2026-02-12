#include<stdio.h>
int main(){
    int phymarks,mathmarks,engmarks,hinmarks,chemarks;
    printf("Enter the marks of physics,math,english,hindi,chemistry respecively\n");
    scanf("%d\n %d\n %d\n %d\n %d",&phymarks,&mathmarks,&engmarks,&hinmarks,&chemarks);
    int totalmarks=phymarks+mathmarks+engmarks+hinmarks+chemarks;
    printf("the total marks of student is %d\n",totalmarks);
    int percentage = totalmarks/5;
    printf("the percentage of student is %d\n",percentage);
    int level;
    if (percentage>=90 && percentage<=100){
              level=1;
    }
    if (percentage>=80 && percentage<90){
              level=2;
    }
    if (percentage>=70 && percentage<80){
            level=3;
    }
    if(percentage>=60 && percentage<70){
        level=4;
    }
    if (percentage<60){
         level=5;
    }
    switch(level){
        case 1 : printf("Grade A");
        break;
        case 2 : printf("Grade B");
        break;
        case 3 : printf("Grade c");
        break;
        case 4 : printf("Grade D");
        break;
        case 5 : printf("Grade E");
        break;
        default : printf("invalid entry");
    }
    return 0;
}