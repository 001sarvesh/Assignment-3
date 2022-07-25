//  Write a program to check whether a given number is positive,
//   negative or zero.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number which you want to check ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("Positive");

    }
        if (num == 0)
        {
            printf("Zero");
        }
    
    else
    {
        printf("Negative");
    }

    return 0;
}