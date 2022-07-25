//  Write a program which takes the cost price and selling price of a product from the 
// user. Now calculate and print profit or loss percentage
#include <stdio.h>
#include <math.h>
int main()
{
    int sp,cp, profitper, lossper;
    printf("Enter the values of sp and cp ");
    scanf("%d %d ",&sp,&cp);
    profitper  = (sp-cp)*100/cp;
    lossper  = (cp-sp)*100/cp;

if (sp>cp)
{
    printf("PROFIT is %d\n",profitper);
}
else{
printf("LOSS is %d\n ", lossper);

}

    return 0;
}