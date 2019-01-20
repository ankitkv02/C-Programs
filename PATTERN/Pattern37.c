/**
 *  Pattern 37
 *    1 3 5 7 9
 *     3 5 7 9
 *      5 7 9
 *       7 9
 *        9
 */

 #include<stdio.h>
 int main()
 {
     int i,j;
     for(i=1;i<=9;i+=2)
     {
         for(j=1;j<i;j+=2)
         {
             printf(" ");
         }
         for(j=i;j<=9;j++)
         {
             if(j%2!=0)
                printf(" %d",j);
         }
         printf("\n");
     }
     return 1;
 }
