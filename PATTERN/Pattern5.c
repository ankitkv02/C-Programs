/**
 *  Pattern 5
 *    11111
 *    11111
 *    11011
 *    11111
 *    11111
 */

 #include<stdio.h>
 int main()
 {
     int i,j;
     for(i=1;i<=25;i=i+5)
     {
         for(j=i;j<=i+4;j++)
         {
            if(j%13==0)
                printf("0");
            else
                printf("1");
         }
         printf("\n");
     }
     return 1;
 }
