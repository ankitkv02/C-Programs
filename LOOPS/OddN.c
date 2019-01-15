/**
 * WAP to print all odd numbers between 1 to n.
 */

 #include<stdio.h>
 int main()
 {
     int i=1,n;
     printf("\nEnter the number :");
     scanf("%d",&n);
     printf("\nOdd numbers between 1 to %d are :\n",n);
     while(i<=n)
     {
         if(i%2==0)
            printf("");
         else
            printf("\n%d",i);
         i++;
     }
     return 1;

 }
