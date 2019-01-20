/**
 * WAP to find maximum between two numbers using conditional/ternary operator.
 */

 #include<stdio.h>

 int main()
{
    int num1,num2,num3;
    printf("Enter the value of first number :");
    scanf("%d",&num1);
    printf("Enter the value of second number :");
    scanf("%d",&num2);
    printf("Enter the value of second number :");
    scanf("%d",&num3);

    num1>num2?num1>num3?printf("First is greatest : %d",num1):printf("Third is greatest : %d",num3):num2>num3?printf("Second is greatest : %d",num2):printf("Third is greatest : %d",num3);
    return 1;
}
