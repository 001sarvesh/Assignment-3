// WAP to print greater between two numbers.print one
//  number of both are the same.

#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers a and b \n");
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        printf("a is greater",a);
    }
    else{
        printf("b is greater",b);
    }
    
    return 0;
}

