#include<stdio.h>

// WAP to find 
int main(){
    int num, reverse = 0,remainder,original;

    printf("enter a number : ");
    scanf("%d",&num);
    original =num;
    while (num > 0)
    {
        remainder = num % 10 ;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }
        printf(" %d is the reverse number of %d. \n", reverse, original);
    return 0;
    
}