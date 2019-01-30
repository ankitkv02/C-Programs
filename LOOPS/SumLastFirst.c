/**
 * WAP to enter any number and find its first and last digit.
 */

 #include<stdio.h>
 #include<math.h>
 int main()
 {
    /* int first,last,n,num;
     printf("Enter the number :");
     scanf("%d",&n);
     num=n;
     last=num%10;
     while(n>10)
     {
         n=n-(n%10);
         n=n/10;
         first=n;
     }
     printf("\nFirst digit of a number is %d",first);
     printf("\nLast digit of a number is %d",last);
     return 1;*/
  
     int n,digits,first,last;

     printf("Enter a Number to know its First & Last digits : ");
     scanf("%d",&n);

     last = n%10;

     digits = (int)log10(n);

     first = (int)(n/pow(10,digits));

     printf("The first digit is %d and the last digit is %d \n",first,last);
     printf("%d contains %d digits. \n",n,digits+1);  //Number of digits can be printd as well to make output more info rich.

     return 0;
    
 }
