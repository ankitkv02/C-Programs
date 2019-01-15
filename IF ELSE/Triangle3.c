/**
 * WAP to check whether the triangle is equilateral, isosceles or scalene triangle.
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
     if(side1==side2==side3)
        printf("\nIt is an equilateral triangle.");
     else if(side1==side2||side1==side3||side2==side3)
        printf("\nIt is an isosceles triangle.");
     else if(side1+side2>side3&&side1+side3>side2&&side2+side3>side1)
        printf("\nIt is an scalene triangle.");
     else
        printf("\nIt is not a valid triangle.");
     return 1;
 }

 ///Another method to find out the type of triangle with the help of angles.
 /**int main()
 {
     unsigned int angle1,angle2,angle3;
     printf("Enter degree of first angle :");
     scanf("%d",&angle1);
     printf("Enter degree of second angle :");
     scanf("%d",&angle2);
     printf("Enter degree of third angle :");
     scanf("%d",&angle3);
     if(angle1+angle2+angle3==180)
        {
            if(angle1==angle2==angle3==60)
                printf("\nIt is an equilateral triangle.");
            else if(angle1==angle2||angle1==angle3||angle2==angle3)
                printf("\nIt is an isosceles triangle.");
            else
                printf("\nIt is a scalene triangle.");
        }
     return 1;

 }*/
