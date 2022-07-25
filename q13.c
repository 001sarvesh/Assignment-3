//  Write a program to check whether a given number
//  is divisible by 3 and divisible by 2.
 #include <stdio.h>
 int main()
 {
    int num;
    printf("Enter the number which you want to check ");
    scanf("%d",&num);
    if (num%2 ==0 && num%3 == 0)
    {
        printf("The number is divisible by 2 and 3 both ");
    }
    else
    printf("The number is not divisible by 2 and 3 both ");
    
    return 0;
 }