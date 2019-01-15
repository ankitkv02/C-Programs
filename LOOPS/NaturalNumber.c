/**
 * WAP to print all natural numbers from 1 to n. - using while loop
 */

 #include<stdio.h>
 int main(void)
 {
     int n,i=1;
     printf("Enter the value for n : ");
     scanf("%d",&n);
     printf("\nNatural numbers from 1 to %d are:\n",n);
     while(i<=n)
     {
         printf("\n%d",i);
         i++;
     }
     return 1;
 }
