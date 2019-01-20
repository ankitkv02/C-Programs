/*
 * C Program to find HCF of a given Number without using Recursion
 */
#include <stdio.h>
int main()
{
    int a, b, result;

    printf("Enter the two numbers to find their HCF: ");
    scanf("%d%d", &a, &b);

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    result=a;
    printf("The HCF of two number is %d.\n", result);

    return 0;
}
