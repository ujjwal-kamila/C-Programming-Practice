#include<stdio.h>

void main() {
    FILE *fptr;

// for write something
    fptr = fopen("uk.txt","w");

//read with a  char
    fputc('M',fptr);
    fputc('A',fptr);
    fputc('N',fptr);
    fputc('G',fptr);
    fputc('O',fptr);

   
    fclose(fptr);

    
    }
