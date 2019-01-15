/**
 * WAP to enter any number and calculate its factorial.
 */

 #include<stdio.h>
 int main()
 {
     int fact=1,i,num;
     printf("Enter the number :");
     scanf("%d",&num);
     for(i=1;i<=num;i++)
     {
         fact=fact*i;
     }
     printf("\nFactorial of a number : %d",fact);
     return 1;
 }
