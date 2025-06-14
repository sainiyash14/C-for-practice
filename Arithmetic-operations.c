//using all arithmetic operations using C
#include<stdio.h>
int main(){
    //Method 1:
    int a= 56;
    int b= 7;
    
    int sum=a+b;
    int sub=a-b;
    int product=a*b;
    float div=(float)a/b; // Corrected division
    int modular=a%b;      // Corrected modulo

    printf("Addition is : %d",sum);  
    printf("\nSubstraction is : %d",sub);
    printf("\nMultiplication is : %d",product);
    printf("\nDivision is : %f",div);
    printf("\nRemainder is : %d \n\n",modular); // Corrected format specifier

//method 2
    int x=10;
    int y=2;

    printf("Addition is : %d",x+y);  
    printf("\nSubstraction is : %d",x-y);
    printf("\nMultiplication is : %d",x*y);
    printf("\nDivision is : %f",(float)x/y); // Corrected division
    printf("\nRemainder is : %d \n\n",x%y); // Corrected format specifier

//method 3: values entered by user:
    int val1;
    int val2;
    printf("Enter first value: ");
    scanf("%d",&val1);
    printf("\nEnter second value: ");
    scanf("%d",&val2);

    printf("Addition of inserted values are : %d",val1+val2);  
    printf("\nSubstraction of inserted values are: %d",val1-val2);
    printf("\nMultiplication of inserted values are: %d",val1*val2);
    printf("\nDivision of inserted values are: %f",(float)val1/val2); // Corrected division
    printf("\nRemainder of inserted values are: %d \n\n",val1%val2); // Corrected format specifier

    printf("ThankYou!!!");
    return 0;
}