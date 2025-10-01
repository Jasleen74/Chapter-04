#include<stdio.h>
int main() {
     
     int  i ;
     printf("how many times u wanna print : ");
     scanf("%d",&i);

     while (i < 10){     
    //     ^-------^ this is a condition it is checked weither it is treu or false
    //    In C meaning os true is that the value is a non zero
    //    False means the value is zero



        printf("Happy Birthday ! \n");  // from { to } is a block of code on executes when the condition is true
        i = i + 1 ;  // the block of code does two things first here it prints
                     // then secondly it changes the value of i to the next preceding one cuz we are adding one to it
     }

  
 return 0;
}