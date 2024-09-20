#include <stdio.h>
// WAP to calculate factorial of a number.
int main()
{
    int num, fact = 1;
    printf("enter a number : ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Invalid Number!, Unable to calculate factorial of -ve number");
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            fact *= i;
        }
        // Alternatively, you can use a while loop or a do-while loop for the same purpose.

        /*while(num>1){
        fact= fact *num;
        num --;}*/
        /*
        do{
        fact*= num;
        num--;
        }while(num>1);
        */
    }
    printf("the factorial of %d is %d", num, fact);
    return 0;
}