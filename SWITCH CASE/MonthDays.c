/**
 * WAP to print total number of a days in a month using switch case.
 */

 #include<stdio.h>
 int main(void)
 {
     int num;
     printf("Enter the month number : ");
     scanf("%d",&num);
     if(num==1||num==3||num==5||num==7||num==8||num==10||num==12)
        num=1;

     else if(num==4||num==6||num==9||num==11)
        num=2;

     else if(num==2)
        num=3;

     else
        num=4;

     switch(num){
         case 1:
             printf("31 days are their in month ");
             break;
         case 2:
            printf("30 days are their in month ");
            break;
         case 3:
            printf("28 days are their in month ");
            break;
         case 4:
            printf("Error!!!");
            break;
    }
     return 1;
 }
