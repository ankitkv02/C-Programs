/**
 * WAP to check whether a number is even or odd using switch case.
 */

 #include<stdio.h>
 int main(void)
 {
     int num,c;
     printf("Enter the number to be checked : ");
     scanf("%d",&num);
     if(num%2==0)
        c=1;
     else
        c=2;
     switch(c){
        case 1:
            printf("Even.");
            break;
        case 2:
            printf("Odd.");
            break;

     }
     return 1;
 }
