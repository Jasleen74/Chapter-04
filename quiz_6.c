//Write a C program using a while loop to print the first 'N' natural numbers (just like your very first problem).
#include<stdio.h>
int main() {
    int n;

    printf("Enter the value of N until u want to print the natural numbers :");
    scanf("%d",&n);

    int i = 1;
    
    while(i<=n){
    printf("%d \n",i);
    i ++;
    }
 return 0;
}