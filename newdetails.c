#include<stdio.h>
#include<string.h>

//user defined structure!
    struct student {
        int roll;
        float cgpa;
        char name[100];
    
    };

    void main() {

// normal sturcture 
        struct student s1 ={1664,9.2,"Ujjwal"};
        printf("Student roll = %d\n",s1.roll);

        // pointe to structure declear 
        struct student *ptr = &s1;
        printf("Student roll = %d\n",(*ptr).roll);


    }