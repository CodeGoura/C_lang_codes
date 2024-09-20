#include<stdio.h>
//WAP to calculate the  sum of digits of a number .
int main(){
    int num, sum = 0, quotient;
    int temp = num;
    printf("Enter a number : ");
    scanf("%d",&num);
    while (num >0)
    {
        quotient = num % 10;
        sum = sum + quotient;
        num = num/10;
    }
    printf("the sum of digits is : %d", sum);
    return 0;
}