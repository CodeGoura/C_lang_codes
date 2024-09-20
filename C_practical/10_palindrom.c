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
    if(original == reverse){
        printf("%d is a palindrom.\n",original);
    }
    else{
        printf(" %d is not a palindrom. \n",original);}
    return 0;
    
}