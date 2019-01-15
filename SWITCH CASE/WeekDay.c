/**
 * WAP to print day of week name using switch case.
 */

 #include<stdio.h>
 int main(void)
 {
     unsigned int num;
     printf("Enter the day number :");
     scanf("%d",&num);
     switch(num){
     case 1:
        printf("Monday.");
        break;
     case 2:
        printf("Tuesday.");
        break;
     case 3:
        printf("Wednesday.");
        break;
     case 4:
        printf("Thursday.");
        break;
     case 5:
        printf("Friday.");
        break;
     case 6:
        printf("Saturday.");
        break;
     case 7:
        printf("Sunday.");
        break;
     default:
        printf("Not a valid number.There are only 7 days in a week.");
        break;
     }
     return 1;
 }
