#include<stdio.h>

void main() {
    FILE *fptr;
    fptr = fopen("q62studentsdetail.txt","w");

    char name[100];
    int age;
    float cgpa;

    printf("Enter name of the student :");
    scanf("%s",name);
    printf("Enter age of the student :");
    scanf("%d",&age);
    printf("Enter Cgpa of the student :");
    scanf("%f",&cgpa);


    fprintf(fptr,"Student Name : %s\n",name);
    fprintf(fptr,"Student age :%d\n",age);
    fprintf(fptr,"Student cgpa:%.2f\n",cgpa);



    fclose(fptr);

    
    }
