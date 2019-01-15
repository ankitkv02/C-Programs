/**
 * WAP to enter base and height of a triangle and find its area.
 */

 #include<stdio.h>
 int main()
 {
     float base,height,area;
     printf("Enter the base of a triangle : ");
     scanf("%f",&base);
     printf("\nEnter the height of a triangle :");
     scanf("%f",&height);
     area=(base*height)/2;
     printf("\nArea of a triangle is %.2f",area);
     return 1;
 }
