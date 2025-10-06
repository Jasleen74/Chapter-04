//Write a C program using a while loop to print the first 'N' even numbers, starting from 2.
#include<stdio.h>
int main() {
     int  n ;int i= 1 ;int even =2;

     printf("Put the value u want to print until: ");
     scanf("%d",&n);

     printf("The first %d even numbers are : \n",n);


     while ( i<=n){
        
        printf("%d \n",even);
        i ++;
        even = even +2;
     }
     
     
 return 0;
}