/**
 * WAP to input month number and number of days in that month.
 */

 #include<stdio.h>
 int main()
 {
     unsigned int number;
     printf("Enter the month number : ");
     scanf("%d",&number);
     if(number==1||number==3||number==5||number==7||number==8||number==10||number==12)
        printf("The month is having 31 days.");
     else if(number==4||number==6||number==9||number==11)
        printf("The month is having 30 days.");
     else if(number==2)
       printf("The month is having 28 days.");
     else
       printf("ERROR!!! Month not found...");
     return 1;
 }
