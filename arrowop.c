#include<stdio.h>
#include<string.h>

//user defined structure!
    struct student {
        int roll;
        float cgpa;
        char name[100];
    
    };

    void main() {

// normal sturcture dot (.) operator
        struct student s1 ={1664,9.2,"Ujjwal"};
        printf("Student.roll = %d\n",s1.roll);

        // pointer to structure declear 
        struct student *ptr = &s1;
        printf("Student.roll with ptr = %d\n",(*ptr).roll);


    //  Print using Arrow Operator 


        printf("Student->roll  = %d\n",ptr->roll);
        printf("Student->name = %d\n",ptr->name);
        printf("Student->cgpa = %d\n",ptr->cgpa);


        


    }