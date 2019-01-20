/**
 *  Pattern 35
 *    5 6 7 8 9
 *     4 5 6 7
 *      3 4 5
 *       2 3
 *        1
 */

 #include<stdio.h>
 int main()
 {
     int i,j;
     for(i=5;i>=1;i--)
     {
         for(j=i;j<5;j++)
         {
             printf(" ");
         }
         for(j=i;j<=i*2-1;j++)
         {
             printf(" %d",j);
         }
         printf("\n");
     }
     return 1;
 }
