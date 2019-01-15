/**
 * WAP to check whether a number is negative, positive or zero.
 */

 #include<stdio.h>
 int main()
 {
     int number;
     printf("Enter the number to be checked :");
     scanf("%d",&number);
     if(number>0)
        printf("%d is a positive number.",number);
     else if(number<0)
        printf("%d is a negative number.",number);
     else
        printf("%d = zero.",number);
     return 1;
 }
