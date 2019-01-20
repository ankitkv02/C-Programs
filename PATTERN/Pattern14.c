/**
 *  Pattern 14
 *  12345
 *  23455
 *  34555
 *  45555
 *  55555
 */

 #include<stdio.h>
 int main()
 {
     int i,j;
     for(i=1;i<=5;i++)
     {
         for(j=i;j<=5;j++)
         {
           printf("%d",j);
         }
         for(j=1;j<i;j++)
         {
             printf("5");
         }
         printf("\n");
     }
     return 1;
 }
