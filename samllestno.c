#include<stdio.h>

void main() {
  // Variable declaration
   int a,b, small;

   printf("Enter Two Numbers\n");
   scanf("%d %d",&a,&b);

  // Small among a and b
    if(a<b)
      {
          small = a;
      }
    else
      {
          small = b;
      }

  //Display smallest number
    printf("The Smallest number is : %d",small);
}
