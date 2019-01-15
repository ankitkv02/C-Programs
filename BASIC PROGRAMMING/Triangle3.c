/**
 * WAP to calculate area of an equilateral triangle.
 */

 #include<stdio.h>
 #include<math.h>
 int main()
 {
     float area,side;
     printf("Enter the side of an equilateral triangle :");
     scanf("%f",&side);
     area=(sqrt(3)/4)*side*side;
     printf("\nArea of an equilateral triangle : %.2f",area);
     return 1;
 }
