// Write a C program using a do-while loop to print a countdown from a number 'N' (entered by the user) down to 1
#include<stdio.h>
int main() {
     int N ; 
     
     printf("Put the value of the countdown u want : ");
     scanf("%d",&N);
     do
     {
        printf("The countdown  is :%d \n",N);
        N--;
     } while (N>0);
     
 return 0;
}