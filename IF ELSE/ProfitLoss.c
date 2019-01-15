/**
 * WAP to calculate profit and loss.
 */

 #include<stdio.h>
int main()
{
    unsigned int salesPrice,costPrice;
    printf("Enter the sales price of a product :");
    scanf("%d",&salesPrice);
    printf("Enter the cost price of a product :");
    scanf("%d",&costPrice);
    if(salesPrice-costPrice>0)
        printf("\nProfit of %d Rupees.",salesPrice-costPrice);
    else
        printf("\nLoss of %d Rupees.",salesPrice-costPrice);
    return 1;
}
