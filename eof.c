#include<stdio.h>

void main() {
    FILE *fptr;
  // for read something
    fptr = fopen("eof.txt","r"); 
    char ch;
    ch = fgetc(fptr);

    while(ch != EOF) {
        printf("%c",ch);
        ch= fgetc(fptr);
    }
    printf("\n");

    fclose(fptr);

    
    }
