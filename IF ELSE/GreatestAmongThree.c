/**
 * WAP to find maximum among three numbers.
 */

 #include<stdio.h>
 int main()
 {
     int num1,num2,num3;
     printf("Enter the value of number 1, 2 and 3 respectively :");
     scanf("%d%d%d",&num1,&num2,&num3);
     if(num1>num2)
     {
         if(num1>num3)
            printf("First number is greatest among three : %d",num1);
         else
            printf("Third number is greatest among three : %d",num3);
     }
     else
     {
         if(num2>num3)
            printf("Second number is greatest among three : %d",num2);
         else
            printf("Third number is greatest among three : %d",num3);
     }
     return 1;
 }

