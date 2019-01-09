///WAP to enter radius of a circle and find its diameter, circumference and area.

#include<stdio.h>
#define pie 3.14
int main()
{
    float radius,diameter,circumference,area;
    printf("Enter the value of radius : ");
    scanf("%f",&radius);
    diameter=2*radius;
    circumference=2*pie*radius*radius;
    area=pie*radius*radius;
    printf("\n Diameter of a circle : %f",diameter);
    printf("\n Circumference of a circle : %f",circumference);
    printf("\n Area of a circle :%f",area);
    return 1;
}
