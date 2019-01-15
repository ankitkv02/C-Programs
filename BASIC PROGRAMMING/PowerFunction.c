///WAP to find power of any number xy(x^y).

#include<stdio.h>
#include<math.h>
int main()
{
    double x,y,c;  ///Variable declaration
    printf("Enter the value of x :");
    scanf("%lf",&x);
    printf("\nEnter the value of y :");
    scanf("%lf",&y);
    ///use of inbuilt function pow
    ///pow function accept two parameter
    c=pow(x,y);
    printf("\n%.2lf ^ %.2lf : %.2lf",x,y,c);
    return 1;
}
