///WAP to enter two numbers and perform all arithmetic operations.

#include<stdio.h>
int main()
{
    int a,b;     ///Variable declaration
    printf("Enter the values for a and b :");
    scanf("%d%d",&a,&b);
    printf("\nAddition : %d",a+b);  ///Perform addition on a and b.
    printf("\nSubtraction : %d",a-b);///Perform subtraction on a and b.
    printf("\nMultiplication : %d",a*b);///Perform multiplication on a and b.
    printf("\nDivision :%d",a/b);///Perform division on a and b.
    printf("\nModulus : %d",a%b);///Perform modulus on a and b.
    return 1;
}
