#include <stdio.h>
#include <math.h> //include library for pow

int main() {

    //Simple Interest Calculator
    //variable declaration 
    float P;
    float R;
    float T;
    float SI;
    
    //variable initialization
    
    //user input for principle
    printf("Enter the principle amount: ");
    scanf("%f" , &P );
    //user input for rate(yearly)
    printf("Enter the annual rate: ");
    scanf("%f" , &R );
    //user input for time(years)
    printf("Enter the time in years: ");
    scanf("%f" , &T);
    //calculation of SI
    SI =( P * R * T) / 100;
    //output of SI
    printf("Your simple interest is: %.2f", SI);
    
   
    return 0;
}
