/**
 * WAP to enter any number and calculate sum of all natural numbers between 1 to .
 */

 #include<stdio.h>
 int main()
 {
     int n,i,sum=0;
     printf("Enter the number :");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         sum=sum+i;
     }
     printf("\nSum of natural numbers is %d",sum);
     return 1;
 }
