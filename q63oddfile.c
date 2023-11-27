#include<stdio.h>

void main() {
    FILE *fptr;
    fptr = fopen("q63oddfile.txt","w");
    int n;
    printf("Enter number :");
    scanf("%d",&n);

    for (int i=1 ; i<=n ; i++){
        if (i%2 != 0) {
            fprintf(fptr,"%d\t",i);
        }
    }


    fclose(fptr);

    
    }
