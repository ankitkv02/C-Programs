/**
 *  Pattern 27
 *  543222345
 *  543333345
 *  544444445
 *  555555555
 */

 #include<stdio.h>
 int main()
 {
     int i,j;
     for(i=2;i<=5;i++)
     {
         for(j=5;j>=i;j--)
         {
             printf("%d",j);
         }
         for(j=2;j<=i*2-2;j++)
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
