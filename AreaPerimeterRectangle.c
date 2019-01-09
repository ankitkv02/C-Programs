///WAP to enter length and breadth of a rectangle and find its Perimeter and Area.

#include<stdio.h>
int main()
{
    double length ,breadth;
    double area,perimeter;
    printf("\nEnter the length and breadth : ");
    scanf("%lf%lf",&length,&breadth);
    area=length*breadth;
    perimeter=2*(length+breadth);
    printf("\nArea of rectangle : %.2lf",area);
    printf("\nPerimeter of a rectangle : %.2lf",perimeter);
    return 1;
}
