#include<stdio.h>
#include<stdlib.h>

void main() {
    float *ptr;
    ptr = (float *) malloc (5*sizeof(float));

    ptr[0] = 1;
    ptr[1] = 5;
    ptr[2] = 9;
    ptr[3] = 7;

    for(int i=0; i<5 ; i++) {
        printf("%f\n",ptr[i]);
    }
}