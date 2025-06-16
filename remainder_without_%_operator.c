//Program to find the remainder after division of twi numbers without modulo operator
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    int q= a/b;
    int r= a -(b*q);
    printf("The remainder is: %d",r);
    return 0;
}
