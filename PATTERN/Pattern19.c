/**
 *  Pattern 19
 *  54321
 *  43212
 *  32123
 *  21234
 *  12345
 */

 #include<stdio.h>
 int main()
 {
     int i,j;
     for(i=5;i>=1;i--)
     {
           for(j=i;j>=1;j--)
         {
             printf("%d",j);
         }
         for(j=2;j<=6-i;j++)

         {
             printf("%d",j);
         }

         printf("\n");
     }
     return 1;
 }
