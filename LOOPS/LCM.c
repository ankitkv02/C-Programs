/**
 * WAP to
 */
 #include<stdio.h>
 int main()
 {
     int first,second,i=1;
     printf("Enter the number : ");
     scanf("%d",&first);
     printf("Enter the number : ");
     scanf("%d",&second);
     while(first%2==0||second%2==0)
     {
         printf("2\n");
         i=i*2;
         first=first/2;
         second=second/2;
     }
     while(first%3==0||second%3==0)
     {
         printf("3\n");
         i=i*3;
         first=first/3;
         second=second/3;
     }
     while(first%5==0||second%5==0)
     {
         printf("5\n");
         i=i*5;
         first=first/5;
         second=second/5;
     }
     while(first%7==0||second%7==0)
     {
         printf("7\n");
         i=i*7;
         first=first/7;
         second=second/7;
     }

    // printf("%d",first);
    // printf("\n%d",second);
     //i=i*first*second;
     printf("\n%d",i);
     return 1;
 }
