/**
 * WAP to enter a number and print all factor of the number.
 */
 #include<stdio.h>
 int main()
 {
     int number,i;
     printf("Enter the number : ");
     scanf("%d",&number);
     while(number%2==0)
     {
         printf("2\n");
         number=number/2;
     }
     while(number%3==0)
     {
         printf("3\n");
         number=number/3;
     }
     while(number%5==0)
     {
         printf("5\n");
         number=number/5;
     }
     while(number%7==0)
     {
         printf("7\n");
         number=number/7;
     }
     printf("%d",number);
     return 1;
 }
