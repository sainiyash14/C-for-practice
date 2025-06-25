//Count from 1 to N numbers
#include <stdio.h>

int main() {
   int n,count=1,sum=0;
   printf("Enter the Value of N : ");
   scanf("%d",&n);

   while(count<=n){
    sum=sum+count;
    count++;
   } 
    printf ("the sum from 1 to the given value is %d\n",sum);
   

    return 0;
}