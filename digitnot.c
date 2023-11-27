#include<stdio.h>
#include<ctype.h>

//Digit or not program
void main() {
    char x;
    printf("\n Cheak the character is digit or not:\n");
    printf("-------------------------------------------\n");
    printf("Enter a character :");
    scanf("%c",&x);
    if( isdigit(x) )
    printf("The enter number is a digit\n\n");
    else
    printf("The enter number is not a digit\n\n");
}