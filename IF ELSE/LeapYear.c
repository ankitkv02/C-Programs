/**
 * WAP to check whether a year is leap year or not.
 */

 #include<stdio.h>
 int main()
 {
     unsigned int year;
     printf("Enter the year to be checked : ");
     scanf("%d",&year);
     if(year%4==0||year%400==0&&year%100!=0)
        printf("\n%d is a leap year.",year);
     else
        printf("\n%d is not a leap year.\n",year);
     return 1;
 }
