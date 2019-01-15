/**
 *WAP to enter two angle of a triangle and find its area.
 */
#include<stdio.h>
int main()
{
    unsigned int angle1,angle2,angle3;
    printf("Enter value of first angle :");
    scanf("%d",&angle1);
    printf("\nEnter value of second angle :");
    scanf("%d",&angle2);

    //Sum of three angles of a triangle is always 180
    angle3=180-(angle1+angle2);

    printf("\nThe third angle of a triangle is %d",angle3);
    return 1;
}
