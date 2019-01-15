/**
 * WAP to print sum of all even number between 1 to n.
 */

  #include<stdio.h>
 int main()
 {
     int i=1,n;
     printf("\nEnter the number :");
     scanf("%d",&n);
     printf("\nEven numbers between 1 to %d are :\n",n);
     while(i<=n)
     {
         if(i%2==0)
            printf("\n%d",i);
         i++;
     }
     return 1;

 }
