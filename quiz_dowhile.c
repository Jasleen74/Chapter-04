// Write a program to print first 'n' natual numbers using do-while loop.
#include<stdio.h>
int main() {
    int n; int i =1;

    printf("Put the value of n upto which you want to get the natural no. : ");
    scanf("%d",&n);
     do{
        printf("The nautral numbers are %d \n",i);
        i ++;
     }
     while(i<=n );
        
        
     
  
 return 0;
}