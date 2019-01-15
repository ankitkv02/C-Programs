///WAP to enter temperature in Celsius and convert it into Fahrenheit.

#include<stdio.h>
int main()
{
    float celsius,fahrenheit;
    printf("Enter the temperature in celsius :");
    scanf("%f",&celsius);
    fahrenheit = (celsius *1.8)+32;   ///Conversion formula
    printf("\nAfter conversion into fahrenheit : %.2f degree",fahrenheit);
    return 1;
}

/**
 *WAP to enter temperature in Fahrenheit and convert it into Celsius.
 *Conversion 2
#include<stdio.h>
int main()
{
    float celsius,fahrenheit;
    printf("Enter the temperature in celsius :");
    scanf("%f",&fahrenheit);
    celsius = (fahrenheit-32)*0.5556;   ///Conversion formula
    printf("\nAfter conversion into fahrenheit : %.2f degree",celsius);
    return 1;
}*/
