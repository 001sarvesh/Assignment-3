
//  Write a program to check whether a given character is an alphabet (uppercase), an
// alphabet (lower case), a digit or a special character.
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase alphabet");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("UpperCase alphabet");
    }
    else if (ch >= '0' && ch <= '9')
        printf("digit ");
    else
        printf("Special character");
    return 0;
}