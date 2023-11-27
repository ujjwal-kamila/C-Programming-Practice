#include<stdio.h>
#include<stdlib.h>

void main() {
    int *ptr;
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);

    ptr = (int *) calloc (n, sizeof(int));


    for(int i=0; i<n ; i++) {
        printf("%d\n",ptr[i]);
    }
}