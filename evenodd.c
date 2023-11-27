#include<stdio.h>
// even=1 odd=0

void main() {
    int number;
    printf("Enter Number: ");
    scanf("%d",&number);
    // printf("%d",number%2==0);

    //number is divisable by 2
    if(number%2==0){
    printf("%d is Even Number", number);}
    else {printf("%d is Odd Number", number);}
}