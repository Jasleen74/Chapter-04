//Write a C program using a do-while loop to repeatedly ask the user to enter a positive number (a number greater than 0) until they provide valid input.
#include<stdio.h>
int main() {
     int i ;
     

     do{
        printf("Pls put a positive value for i : ");
        scanf("%d",&i);

        if (i<0){
            printf("The value u entered is negative pls enter again ");

        }
     } while(i<0);
       
        printf("The value u entered is correct");
       
  
 return 0;
}