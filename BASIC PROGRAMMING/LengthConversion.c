///WAP to enter length in centimeter and convert it into meter and Kilometer.

#include<stdio.h>
int main()
{
    float centimeter,meter,kilometer;
    printf("\nEnter the length in centimeter : ");
    scanf("%f",&centimeter);
    meter = 100 * centimeter; ///Calculation
    kilometer = 1000 * centimeter; ///Calculation
    printf("\nLength in meter : %.2f m.",meter);
    printf("\nLength in kilometer : %.2f km.",kilometer);
    return 1;
}
