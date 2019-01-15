/**
 * WAP to enter any number and find the sum of first and last digit of the number.
 */

 #include<stdio.h>
 int main()
 {
     int first=0,last,n,num,sum=0;
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
     sum=first+last;
     printf("Sum of first and last digit of a number is %d",sum);
     return 1;
 }

