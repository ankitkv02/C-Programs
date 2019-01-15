/**
 * WAP to input angle of a triangle and check whether triangle is a valid or not.
 */

 #include<stdio.h>
 int main()
 {
     unsigned int angle1,angle2,angle3;
     printf("Enter degree of first angle :");
     scanf("%d",&angle1);
     printf("Enter degree of second angle :");
     scanf("%d",&angle2);
     printf("Enter degree of third angle :");
     scanf("%d",&angle3);
     if(angle1+angle2+angle3==180)
        printf("\nIt is a valid triangle.");
     else
        printf("\nIt is not a valid triangle.");
     return 1;
 }
