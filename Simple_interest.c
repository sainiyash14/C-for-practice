//Calculate the simple interest.
#include<stdio.h>
int main(){
    float Principle,Rate,Time,SI;
//Method 1:    
    // Principle=1200;
    // Rate=8;
    // Time=5;
    // SI= (Principle*Rate*Time)/100;
    // printf("Simple Interest is : %frs",SI);

//Method 2: Taking User input.
    printf("Enter the Principle Amount (in rs): ");
    scanf("%f",&Principle);
    printf("Enter the Rate of Interest (in %%): ");
    scanf("%f",&Rate);
    printf("Enter the Time (in Years): ");
    scanf("%f",&Time);
    SI= (Principle*Rate*Time)/100;
    printf("Simple Interest is : %frs",SI);

    return 0;

}