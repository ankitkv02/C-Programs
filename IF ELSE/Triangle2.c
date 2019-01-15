/**
 * WAP to  input all sides of a triangle and check whether triangle is valid or not.
 */

 #include<stdio.h>
 int main()
 {
     unsigned int side1,side2,side3;
     printf("Enter the value of first side of a triangle :");
     scanf("%d",&side1);
     printf("Enter the value of second side of a triangle :");
     scanf("%d",&side2);
     printf("Enter the value of third side of a triangle :");
     scanf("%d",&side3);
     if(side1+side2>side3&&side1+side3>side2&&side2+side3>side1)
        printf("\nIt is a valid triangle.");
     else
        printf("\nIt is not a valid triangle.");
     return 1;
 }
