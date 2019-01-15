/**
 * WAP to enter any number and check whether a number is palindrome or not.
 */

 #include<stdio.h>
 int main()
 {
     int num,n,sum=0,temp;
     printf("Enter the number :");
     scanf("%d",&n);
     temp=n;
     while(n!=0)
     {
         num=n%10;
         sum=sum*10+num;
         n=(n-num)/10;

     }
     if(temp==sum)
        printf("\n%d is a palindrome number.",temp);
     else
        printf("\n%d is a not palindrome number.",temp);
     return 1;
 }
