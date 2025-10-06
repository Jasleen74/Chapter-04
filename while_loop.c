#include<stdio.h>
int main() {
     
     int  i ;
     printf("how many times u wanna print : ");
     scanf("%d",&i);

     while (i < 10){     
    //     ^-------^ this is a condition it is checked weither it is true or false
    //    In C meaning os true is that the value is a non zero
    //    False means the value is zero



        printf("Happy Birthday ! \n");  // from { to } is a block of code on executes when the condition is true
        i = i + 1 ;  // the block of code does two things first here it prints
                     // instead of i +1 we can also write i ++ which is an incrementing operator
                     // then secondly it changes the value of i to the next preceding one cuz we are adding one to it
     }

  
 return 0;
}

// first the value is entered , then it checks the conidition in the while so lets say the value was 4 
// and 4 is less than 10 so the condition is true so it prints happy birthday
//then we wrote that i = i +1;
// means it will add one to the i as i was 4 so 4+1 = 5 which is less than 10 and hence the condition also becomes true
// henace the code continues