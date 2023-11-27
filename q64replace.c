#include<stdio.h>

void main() {
    FILE *fptr;
    fptr = fopen("q64replace.txt","r");
    int a;
    fscanf(fptr,"%d", &a);
        int b;
    fscanf(fptr,"%d", &b);
    
     fclose(fptr);

     fptr = fopen("q64replace.txt","w");
     fprintf(fptr,"%d", a+b);

      fclose(fptr);


    }
