/**
 * WAP to print table of any number.
 */

 #include<stdio.h>
 int main()
 {
     unsigned int number,i;
     printf("\nEnter the number :");
     scanf("%d",&number);
     for(i=1;i<=10;i++)
     {
         printf("\n%d * %d = %d",number,i,number*i);
     }
     return 1;
 }
