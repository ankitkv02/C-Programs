/**
 * WAP to enter any number and calculate product of its digits.
 */

 #include<stdio.h>
 int main()
 {
     int num,n,product=1;
     printf("Enter the number :");
     scanf("%d",&n);
     while(n!=0)
     {
         num=n%10;
         n=(n-num)/10;
         product=product*num;
     }
     printf("\nProduct of its digits : %d",product);
     return 1;
 }
