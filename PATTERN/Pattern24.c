/**
 *  Pattern 24
 *  12345
 *  22345
 *  33345
 *  44445
 *  55555
 */

 #include<stdio.h>
 int main()
 {
     int i,j;
     for(i=1;i<=5;i++)
     {
         for(j=1;j<i;j++)
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
