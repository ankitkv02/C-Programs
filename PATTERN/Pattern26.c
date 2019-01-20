/**
 *  Pattern 26
 *  555555555
 *  544444445
 *  543333345
 *  543222345
 *  543212345
 */

 #include<stdio.h>
 int main()
 {
     int i,j;
     for(i=5;i>=1;i--)
     {
         for(j=5;j>i;j--)
         {
             printf("%d",j);
         }
         for(j=1;j<2*i-1;j++)
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
