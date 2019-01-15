/**
 * WAP to print all natural numbers in reverse (from n to 1). - using while loop
 */

 #include<stdio.h>
 int main()
 {
     int n,i=1;
     printf("Enter the value for n : ");
     scanf("%d",&n);
     printf("\nNatural numbers from %d to 1 are:\n",n);
     while(n>=i)
     {
         printf("\n%d",n);
         n--;
     }
     return 1;
 }
