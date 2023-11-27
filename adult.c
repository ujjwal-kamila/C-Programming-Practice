#include<stdio.h>

void main() {
    int age;
    printf("enter age: ");
    scanf("%d",&age);

    if(age>=18){
        printf("Adult \n");
    }
    else{
        printf("Not Adult\n ");
    }
}