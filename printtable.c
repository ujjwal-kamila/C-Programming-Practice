#include<stdio.h>
void printTable(int n);
void main() {
    int n;
    printf("Enter number : ");
    scanf("%d",&n);

    printTable(n);  //argument or Actual parameters
}

    int sum(int x,int y) {
        return x+y;
    }

    void printTable(int n) {
        for(int i=1; i<=10; i++) { //parameter/Formal parameter
            printf("%d\n",n*i); 
            
            //otherwise //printf("%d x %d = %d\n",n,i,n*i);
        }
    }