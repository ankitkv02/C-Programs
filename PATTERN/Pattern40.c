/**
 *  Pattern 40
 *     1
 *     2 3
 *     4 5 6
 *     7 8 9 10
 *     11 12 13 14 15
 */

 #include<stdio.h>
 int main()
 {
     int i,j,k;
     for(i=1;i<=7;i++)
     {
         for(j=i;j<=i+i-1;j++)
         {
             printf(" %d",j);
         }
         printf("\n");
     }
     return 1;
 }
