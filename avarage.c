#include<stdio.h>

//avarage of three numbers

void main() {
    int x,y,z;
    float avg;
    printf("Enter the first number x :");
    scanf("%d",&x);
    printf("Enter the first number y :");
    scanf("%d",&y);
    printf("Enter the first number z : ");
    scanf("%d",&z);
avg=(x+y+z)/3.0; //calculating Avarage
printf("Avarage of three numbers is : %f",avg);
}