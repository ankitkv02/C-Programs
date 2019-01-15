/**
 * WAP to enter week number and print week day.
 */

 #include<stdio.h>
 int main()
 {
     unsigned int number;
     printf("Enter the week number : ");
     scanf("%d",&number);
     if(number==1)
        printf("\nMonday.");
     else if(number==2)
        printf("\nTuesday.");
     else if(number==3)
        printf("\nWednesday.");
     else if(number==4)
        printf("\nThursday.");
     else if(number==5)
        printf("\nFriday.");
     else if(number==6)
        printf("\nSaturday.");
     else if(number==7)
        printf("\nSunday.");
     else
        printf("\nError!!!");
     return 1;

 }
