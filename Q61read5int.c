#include<stdio.h>

void main() {
    FILE *fptr;
  // for read something
    fptr = fopen("q61read5it.txt","r"); 
    int n;

    fscanf(fptr,"%d",&n);
    printf("number : %d\n", n);
    fscanf(fptr,"%d",&n);
    printf("number : %d\n", n);
    fscanf(fptr,"%d",&n);
    printf("number : %d\n", n);
    fscanf(fptr,"%d",&n);
    printf("number : %d\n", n);
    fscanf(fptr,"%d",&n);
    printf("number : %d\n", n);

    fclose(fptr);

    
    }
