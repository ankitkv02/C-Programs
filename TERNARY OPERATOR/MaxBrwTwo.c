/**
 * WAP to find maximum between two numbers using conditional/ternary operator.
 */

 #include<stdio.h>

 int main()
{
    int num1,num2;
    printf("Enter the value of first number :");
    scanf("%d",&num1);
    printf("Enter the value of second number :");
    scanf("%d",&num2);

    num1>num2?printf("First number %d is greater then second number %d",num1,num2):printf("second number %d is greater then First number %d",num2,num1);
    return 1;
}
