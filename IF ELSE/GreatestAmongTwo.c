/**
 * WAP to find maximum between two numbers.
 */

 #include<stdio.h>
 int main()
 {
     int num1,num2;
     printf("Enter the value of number 1 and 2 respectively :");
     scanf("%d%d",&num1,&num2);
     if(num1>num2)
        printf("\nFirst number is greater : %d",num1);
     else if(num2>num1)
        printf("\nSecond number is greater : %d",num2);
     else
        prinf("\nNumbers are equal %d",num1);
     return 1;
 }
