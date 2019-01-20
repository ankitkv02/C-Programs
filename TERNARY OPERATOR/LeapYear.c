/**
 * WAP to check whether a year is leap year or not using conditional/ternary operator.
 */

 #include<stdio.h>

 int main()
{
    int year;
    printf("Enter the year to be checked :");
    scanf("%d",&year);

    (year%400==0||year%4==0&&year%100!=0?printf("%d is a Leap year.",year):printf("%d is Not a leap year.",year));

    return 1;
}
