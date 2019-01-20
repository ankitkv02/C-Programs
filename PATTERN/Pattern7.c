/**
 *  Pattern 7
 *    10101
 *    01010
 *    10101
 *    01010
 *    10101
 */

 #include<stdio.h>
 int main()
 {
     int i,j;
     for(i=1;i<=25;i=i+5)
     {
         for(j=i;j<=i+4;j++)
         {
            if(j%2==0)
                printf("0");
            else
                printf("1");
         }
         printf("\n");
     }

                   /*Logic 2nd*/

//       for(i=1;i<=5;i++)
//       {
//           for(j=1;j<=5;j++)
//           {
//               if(i%2==0)
//               {
//                   if(j%2==0)
//                    printf("1");
//                   else
//                    printf("0");
//               }
//               else
//               {
//                   if(j%2==0)
//                    printf("0");
//                   else
//                    printf("1");
//               }
//           }
//           printf("\n");
//       }
     return 1;
 }
