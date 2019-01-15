/**
 * WAP to find power of any number using FOR loop.
 */

 #include<stdio.h>
 int main()
 {
     int number,power,num=1s,i;
     printf("Enter the number :");
     scanf("%d",&number);
     printf("\nEnter its power :");
     scanf("%d",&power);
     for(i=1;i<=power;i++)
     {
         num=num*number;
     }
     printf("X ^ Y : %d",num);
     return 1;
 }
