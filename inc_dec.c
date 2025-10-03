#include<stdio.h>
int main() {
     int i ;
     printf("Put the value of i : ");
     scanf("%d",&i);



     i = i +5;
     printf("The value of i is %d\n",i);

    //  i ++ ;       // i ++ prints first and then incerments (Post increment operator)
     printf("Now the value of i is %d \n",i ++);  // we can also write as
    printf("here the value os i is %d", i);  // , i ++ 

    // ++i ;        // ++i does the increment first and then prints(Pre increment operators)
   // printf("Here the value of i is %d",i);
  
 return 0;
}
// This all applies for decrement too in the same way.