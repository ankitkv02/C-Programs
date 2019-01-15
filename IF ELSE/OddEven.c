/**
 * WAP to check whether a number is even or odd.
 */

 #include<stdio.h>
 int main()
 {
     int number;
     printf("Enter the number to be checked : ");
     scanf("%d",&number);
     if(number%2==0)
        printf("\%d is Even.",number);
     else
        printf("%d is Odd.",number);
     return 1;
 }
