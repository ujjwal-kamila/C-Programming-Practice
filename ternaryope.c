
 #include<stdio.h>

void main() {
    char age;
    printf("enter age: ");
    scanf("%c",&age);
    
   age>=18 ? printf("Adult \n"): printf("Not Adult\n ");
}