//Take float input andreturn the fractional part of the real number
#include <stdio.h>

int main() {
    float x;
    printf("enter the decimal number: ");
    scanf("%f",&x);
    int y =x;
    float z = x-y;
    printf("the fraction value seperated %f: ",z);
    return 0;
}