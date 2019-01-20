/**
 *  Pattern 18
 *  12345
 *  21234
 *  32123
 *  43212
 *  54321
 */

 #include<stdio.h>
 int main()
 {
     int i,j;
     for(i=5;i>=1;i--)
     {
           for(j=6-i;j>1;j--)
         {
             printf("%d",j);
         }
         for(j=1;j<=i;j++)

         {
             printf("%d",j);
         }

         printf("\n");
     }
     return 1;
 }
