#include<stdio.h>
#include<string.h>

//user defined structure!
    struct student {
        int roll;
        float cgpa;
        char name[100];
    
    };
    
        void main() {
            struct student s1;
            s1.roll = 101;
            s1.cgpa = 8.5;
            //s1.name = "Ujjwal";
            strcpy(s1.name,"Ujjwal");
            printf("Name of the 1st Student : %s\n", s1.name);
            printf("Roll of the 1st Student  : %d\n", s1.roll);
            printf("Cgpa of the 1st Student : %.2f\n", s1.cgpa);

            struct student s2;
            s2.roll = 102;
            s2.cgpa = 8.6;
            //s2.name = "Aashiq";
            strcpy(s2.name,"Asshiq");
            printf("Name of the 2st Student : %s\n", s2.name);
            printf("Roll of the 2st Student  : %d\n", s2.roll);
            printf("Cgpa of the 2st Student : %.2f\n", s2.cgpa);


            struct student s3;
            s3.roll = 103;
            s3.cgpa = 8.39;
            //s3.name = "Rudra";
            strcpy(s3.name,"Rudra");
            printf("Name of the 3st Student : %s\n", s3.name);
            printf("Roll of the 3st Student  : %d\n", s3.roll);
            printf("Cgpa of the 3st Student : %.2f\n", s3.cgpa);


        }