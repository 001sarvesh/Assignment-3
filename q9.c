//  WAP to find greatest among the three given numbers. print number once if the greatest
// number appear two or three times.

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the number a, b and c\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("a = %d\n b = %d\n c = %d\n", a, b, c);
    if (a > b)
    {
        if (b > c)
        {
            printf("a is greatest among three numbers\n");
        }
        else
        {
            printf("c is greatest among three\n");
        }
    }
    else if (b > c)
    {
        printf("b is greatest among three numbers\n");
    }
    else
    {
        printf("c is greatest among three numbers\n");
    }
    return 0;
}