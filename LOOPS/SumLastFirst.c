/**
 * WAP to enter any number and find its first and last digit.
 */

 #include<stdio.h>
 int main()
 {
     int first,last,n,num;
     printf("Enter the number :");
     scanf("%d",&n);
     num=n;
     last=num%10;
     while(n>10)
     {
         n=n-(n%10);
         n=n/10;
         first=n;
     }
     printf("\nFirst digit of a number is %d",first);
     printf("\nLast digit of a number is %d",last);
     return 1;
 }
