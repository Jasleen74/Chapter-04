//Write a C program using a do-while loop to repeatedly ask the user to enter a number 'N' until they enter a value that is within the specific range of 10 to 20 (inclusive).
#include<stdio.h>
int main() {
    int n ;
    
    do
    {
        printf("pls enter a number btw 10 to 20 : ");
        scanf("%d",&n);

        if(n<10  || n>20){
            printf("The value u entred is not between 10 and 20 so read the english again \n");
        }
 

}while(n < 10 || n > 20);
 printf("Yes the value is correct");
    
     
  
 return 0;
}