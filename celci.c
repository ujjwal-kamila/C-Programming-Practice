#include<stdio.h>

void main() {
    float temp,far,celc;

    /*Temparature Converture from Celcius to Farenhite
    And Farenhite to Cencious */
    printf("Enter temparature F to C : ");
    scanf("%f",&far);
    printf("Enter temparature C to F : ");
    scanf("%f",&celc);
    float convC = (5*far - 160)/9 ;
    float convF = 9*celc/5 + 32;
    if(temp=far){
        printf("Converted temp is : %f ",convC);
        
    }
    if(temp=far){
        printf("Converted temp is : %f ",convF);
        
    }
}