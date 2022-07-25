// WAP which takes the length of the sides of a triangle as an 
// input. Display whether triangle is valid or not

#include <stdio.h>
int main()
{
    int s1,s2,s3;
    int sum =0;
    printf("Enter the length of sides of triangle ");
    scanf("%d %d %d", &s1,&s2,&s3);
    if (s1+s2>s3 && s2+s3>s1 && s3+s1>s2 )
    {
        printf("The triangle is valid triangle ");
    }
    else{
        printf("The triangle is not valid ");
    }
    
    return 0;
}