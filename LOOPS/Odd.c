/**
 * WAP to print all odd numbers between 1 to 100.
 */

 #include<stdio.h>
 int main()
 {
     int i=1;
     printf("\nOdd numbers between 1 to 100 are :\n");
     while(i<=100)
     {
         if(i%2==0)
            printf("");
         else
            printf("\n%d",i);
         i++;
     }
     return 1;

 }
