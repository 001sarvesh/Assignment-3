// WAP which takes the month number as an input and display 
// number of days in that month.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the  month number - n\n ");
    scanf("%d",&n);
   if (n== 1 || 3 || 5 || 7 || 8 || 10 || 12)
    {
        printf("31 DAYS");
    }
    else if(n==4 || 6 || 9 || 11 )
{
    printf("30 DAYS");
}
    else{
        printf("28 or 29 DAYS");
    }
    return 0;
}