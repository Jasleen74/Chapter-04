#include<stdio.h>
int main() {
     int i =1; int k;
     int multiply;
     printf(" Put the count of multilples u wnat to print :");
     scanf("%d",&k);

     printf("The first %d multiples of 5 are \n",k);

     do
     {
        multiply = 5*i;
        printf(" %d \n",multiply);
        i++;
     } while (i<=k);
     
  
 return 0;
}