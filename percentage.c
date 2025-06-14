//finding the percentage of student from its marks in subjects:
#include<stdio.h>
int main(){
//method 1:
    float m1 = 75,m2=82,m3=96,m4=78,m5=87;
    float percent = (m1+m2+m3+m4+m5)/5.0;
    printf("the percentage of the marks is : %f",percent);

//method 2: using user input.
    float sub1,sub2,sub3,sub4,sub5;
//its long!!! <-- from here-->
    // printf("\nEnter the marks of subject 1: ");
    // scanf("%f",&sub1);
    // printf("Enter the marks of subject 2: ");
    // scanf("%f",&sub2);
    // printf("Enter the marks of subject 3: ");
    // scanf("%f",&sub3);
    // printf("Enter the marks of subject 4: ");
    // scanf("%f",&sub4);
    // printf("Enter the marks of subject 5: ");
    // scanf("%f",&sub5);
// <--To here-->

//To make it short we can use this snippet.
    printf("\nEnter the marks of your subjects(5): ");
    scanf("%f %f %f %f %f",&sub1,&sub2,&sub3,&sub4,&sub5);

    float percentage=(sub1+sub2+sub3+sub4+sub5)/5.0;
    printf("Percentage of Marks is: %f",percentage);
    return 0;
}