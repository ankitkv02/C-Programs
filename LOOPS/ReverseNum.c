/**
 * WAP to enter any number and print its reverse.
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
         sum=sum*10+num;
         n=(n-num)/10;

     }
     printf("\nReverse of a number : %d",sum);
     return 1;
 }
