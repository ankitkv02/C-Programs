/**
 * WAP to print all even numbers between 1 to 100. - using while loop
 */

 #include<stdio.h>
 int main()
 {
     int i=1;
     printf("\nEven numbers between 1 to 100 are :\n");
     while(i<=100)
     {
         if(i%2==0)
            printf("\n%d",i);
         i++;
     }
     return 1;

 }
