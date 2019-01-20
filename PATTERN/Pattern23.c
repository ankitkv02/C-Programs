/**
 *  Pattern 23
 *  54321
 *  54322
 *  54333
 *  54444
 *  55555
 */

 #include<stdio.h>
 int main()
 {
     int i,j;
     for(i=1;i<=5;i++)
     {
         for(j=5;j>=i;j--)
         {
             printf("%d",j);
         }
         for(j=1;j<=i;j++)
         {
             printf("%d",i);
         }
         printf("\n");
     }
     return 1;
 }
