/**
 * WAP to swap first and last digit of any number.
 */

 #include<stdio.h>
 int main()
 {
     int num,n,z,a,b,i=0,first,count=0;
     printf("Enter the number :");
     scanf("%d",&n);
     a=n%10;
     z=a;
     num=n;
     while(n>10)
     {
         n=n-(n%10);
         n=n/10;
         first=n;
         b=first;
          i++;
         count++;
     }
     while(count!=0)
     {
         a=a*10;
         count--;
     }
     while(i!=0)
     {
         first=first*10;
         i--;
     }
     num=num+a+b-first-z;
     printf("\n%d",num);
     return 1;
 }
