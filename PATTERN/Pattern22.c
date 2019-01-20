/**
 *  Pattern 22
 *  55555
 *  44445
 *  33345
 *  22345
 *  12345
 */

 #include<stdio.h>
 int main()
 {
     int i,j;
     for(i=5;i>=1;i--)
     {
         for(j=i;j>1;j--)
         {
             printf("%d",i);
         }
         for(j=i;j<=5;j++)
         {
             printf("%d",j);
         }
         printf("\n");
     }
     return 1;
 }
