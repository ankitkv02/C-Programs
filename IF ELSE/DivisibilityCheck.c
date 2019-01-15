/**
 * WAP to check whether a number is divisible by 5 and 11 or not
 */

#include<stdio.h>
int main()
{
    int number;
    printf("Enter the number to be checked : ");
    scanf("%d",&number);
    if(number%5==0&&number%11==0)
        printf("\n%d is divisible by both 5 and 11.",number);
    else if(number%11==0)
        printf("\n%d is divisible by 11 only.",number);
    else if(number%5==0)
        printf("\n%d is divisible by 5 only.",number);
    else
        printf("\n%d is not divisible by both 5 and 11.",number);
    return 1;
}
