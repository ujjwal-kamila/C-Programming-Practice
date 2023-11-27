#include<stdio.h>

void main() {
    FILE *fptr;
    fptr = fopen("u.txt","r");
    
//     char ch;
//     fscanf(fptr,"%c",&ch);
//     printf("Character is : %c\n",ch);
//     fscanf(fptr,"%c",&ch);
//     printf("Character is : %c\n",ch);

// fscanf(fptr,"%c",&ch);
//     printf("Character is : %c\n",ch);

// fscanf(fptr,"%c",&ch);
//     printf("Character is : %c\n",ch);

// fscanf(fptr,"%c",&ch);
//     printf("Character is : %c\n",ch);

// fscanf(fptr,"%c",&ch);
//     printf("Character is : %c\n",ch);

//if we print integers then !

int ch;
    fscanf(fptr,"%d",&ch);
    printf("Character is : %d\n",ch);

    fscanf(fptr,"%d",&ch);
    printf("Character is : %d\n",ch);

    fscanf(fptr,"%d",&ch);
    printf("Character is : %d\n",ch);

    fclose(fptr);

    
    }
