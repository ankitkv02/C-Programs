/**
 * WAP to enter any number and print it in words.
 */
 #include<stdio.h>
 int main()
 {
     int num,n,i,sum=0;
     printf("Enter the number :");
     scanf("%d",&n);
     while(n!=0)
     {
         num=n%10;
         sum=sum*10+num;
         n=(n-num)/10;

     }
     //i=sum;
     while(sum!=0)
     {
         i=sum%10;
         switch(i)
         {
         case 0:
            printf(" zero");
            break;
         case 1:
            printf(" one");
            break;
         case 2:
            printf(" two");
            break;
         case 3:
            printf(" three");
            break;
         case 4:
            printf(" four");
            break;
         case 5:
            printf(" five");
            break;
         case 6:
            printf(" six");
            break;
         case 7:
            printf(" seven");
            break;

         case 8:
            printf(" eight");
            break;
         case 9:
            printf(" nine");
            break;
         }
         sum=sum/10;
     }
     return 1;
 }
