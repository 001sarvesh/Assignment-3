//  Write a program to check whether a given year is a leap year or not.
#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year which you want to check ");
    scanf("%d ",&year);
    if (year%400 == 0 || year % 100 != 0 && year %4 == 0)
    {
        printf("Year is leapyear ");
    }
    else
    printf("Year is not a leapyear ");
    return 0;
}