// WAP to check whether a given number is a three digit or not

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
if (n>99 && n<1000)
{
    printf("The number is three digit");
}
else{
    printf("The number is not three digit number");
}
    return 0;
}