//  Write a program to check whether a given alphabet
//  is in uppercase or lowercase.
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
    else
    printf("Digit");
    return 0;
}