///WAP to convert days into year, weeks and days.
#include<stdio.h>
int main()
{
    unsigned int year,month,days,week;
    printf("Enter the number of days : ");
    scanf("%d",&days);
    year=days/365;
    days=days%365;
    month=days/30;
    days=days%30;
    week=days/7;
    days=days%7;
    printf("Number of years :%d",year);
    printf("\nNumber of month :%d",month);
    printf("\nNumber of week  :%d",week);
    printf("\nNumber of days  :%d",days);
    return 1;
}
