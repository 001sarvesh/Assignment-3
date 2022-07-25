// WAP to check whether a given number is an even number or odd number

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number which you want to check\n");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("The number is even number ");
    }
    else{
        printf("The number is odd number");
    }
    
    return 0;
}