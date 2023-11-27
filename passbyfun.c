#include<stdio.h>
#include<string.h>

//user defined structure!
    struct student {
        int roll;
        float cgpa;
        char name[100];
    
    };

    void printinfo(struct student s1);  //using function declaration

    void main() {

        struct student s1 ={1664,9.2,"Ujjwal"};
        printinfo(s1);


          printf("Student.roll = %d\n",s1.roll);

    }

    //  Print using dot (.) Operator 
        void printinfo(struct student s1){

        printf("Student Information : \n");
        printf("Student.roll  = %d\n",s1.roll);
        printf("Student.name = %s\n",s1.name);
        printf("Student.cgpa = %.2f\n",s1.cgpa);

        s1.roll =1660;


    }