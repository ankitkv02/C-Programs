/**
 * WAP to enter any number and calculate its square root.
 */

 #include<stdio.h>
 #include<math.h>

 int main(void)
 {
     double number;
     printf("Enter the number : ");
     scanf("%lf",&number);
     printf("Square root of a number is %.2lf",sqrt(number));
     return 1;
 }
