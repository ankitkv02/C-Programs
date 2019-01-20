/**
 * WAP to check whether a number is even or odd using conditional/ternary operator.
 */

 #include<stdio.h>

 int main()
{
    int num1;
    printf("Enter the value of first number :");
    scanf("%d",&num1);

    num1%2==0?printf("%d is even number.",num1):printf("%d is odd number.",num1);
    return 1;
}
