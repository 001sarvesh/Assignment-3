//  Write a program to check whether a given number 
//  is divisible by 7 or divisible by 3.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number which you want to check ");
    scanf("%d",&num);

    if (num % 7 ==0 || num%3==0)
    {
        printf("The number is divisible by 7 or 3 ");
    }
    else
    printf("The number is not divisible by 7 or 3 ");
    return 0;
}