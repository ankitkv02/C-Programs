/**
 * WAP to enter P,T,R and calculate Simple Interest.
 */

 #include<stdio.h>
 int main()
 {
     unsigned int p,r,t,Si;
     ///User input
     printf("Enter Principal : ");
     scanf("%d",&p);
     printf("\nEnter the Time : ");
     scanf("%d",&t);
     printf("\nEnter the Rate : ");
     scanf("%d",&r);
     /** Formula to calculate simple interest */
     Si = p * r * t;
     printf("\nSimple interest : %d",Si);
     return 1;
 }
