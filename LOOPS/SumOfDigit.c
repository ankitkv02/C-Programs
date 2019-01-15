/**
 * WAP to enter any number and calculate sum of its digits.
 */

 #include<stdio.h>
 int main()
 {
     int num,n,sum=0;
     printf("Enter the number :");
     scanf("%d",&n);
     while(n!=0)
     {
         num=n%10;
         n=(n-num)/10;
         sum=sum+num;
     }
     printf("\nSum of its digits : %d",sum);
     return 1;
 }
