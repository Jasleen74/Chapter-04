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