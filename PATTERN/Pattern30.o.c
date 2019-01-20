/**
 *  Pattern 30
 *   1
 *   24
 *   135
 *   2468
 *   13579
 */

 #include<stdio.h>
 int main()
 {
     int i,j;
     for(i=1;i<=5;i++)
     {
         if(i%2!=0)
         {
             for(j=1;j<=i*2-1;j++)
             {
                 if(j%2!=0)
                    printf("%d",j);
             }
         }
         else
         {
             for(j=1;j<=i*2;j++)
             {
                 if(j%2==0)
                 printf("%d",j);
             }
         }

         printf("\n");
     }
     return 1;
 }
