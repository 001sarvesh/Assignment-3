//   Write a program to take marks of 5 subjects from the user. Assume marks are given 
// out of 100 and passing marks is 33. Now display whether the candidate passed the 
// examination or failed.
#include <stdio.h>
int main()
{
    int s1,s2,s3,s4,s5;
    printf("Enter the marks of candidates in five subjects\n ");
    scanf("%d\n %d\n %d\n %d\n %d\n ",&s1,&s2,&s3,&s4,&s5);
    if (s1 && s2 && s3 && s4 && s5 >= 33)
    {
        printf("The candidate is pass ");
    }
    else 
    printf("The candidate is fail ");
    
    return 0;
}