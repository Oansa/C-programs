//Bank loan application
#include <stdio.h>

int main() {
    // Variable declaration
    int age;
    float income;
    
    //User inputs age and income
    printf("Please enter your age here: ");
    scanf("%d", &age);
    
    printf("Please enter your annual income here(KSH): ");
    scanf("%f", &income);
    
    //Determine if customer qualifies for a loan
    if(age >= 21 && income >= 21000){
        printf("Congratulations you qualify for a loan.");
    }else{
        printf("Unfortunately, we are unable to offer you a loan at this time");
    }

    return 0;
}
