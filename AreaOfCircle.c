#include<stdio.h>
int main(){
//Method 1 with already taking radius.
    // int radius=5;
    // float pi=3.1415;
    // float area = pi * radius * radius;
    // printf("The area of Circle is : %f",area);

//Method 2 with asking user the radius.
    int radius;
    float pi=3.1415;
  
    printf("Enter the radius of circle(cm): ");
    scanf("%d",&radius);
      float area =pi*radius*radius;
    printf("The area of circle is %f cm",area);
    return 0;
}