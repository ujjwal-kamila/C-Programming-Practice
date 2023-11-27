#include<stdio.h>
#include<string.h>

//user defined structure!
    typedef struct student {
        int roll;
        float cgpa;
        char name[100];
    
    } stu ;     // "stu" is the  nickname (typedef keyword)


typedef struct Computerengineeringstudent {
        int roll;
        float cgpa;
        char name[100];
    
    } coe ;  // "coe" is the  nickname (typedef keyword)

    void main() {

        coe s1;
        s1.roll = 101;
        s1.cgpa = 8.68;
        strcpy(s1.name,"Ujjwal");


          printf("Student name is : %s\n",s1.name);

    }
