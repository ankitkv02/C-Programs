/**
 * WAP to create Simple calculator using switch case.
 */

 #include<stdio.h>
 int main(void)
 {
     int a,b,c;
     do{
     printf("\n\nEnter the values for A and B :\n");
     scanf("%d%d",&a,&b);
     printf("Press #1 for Addition.\n");
     printf("Press #2 for Subtraction.\n");
     printf("Press #3 for Multiplication.\n");
     printf("Press #4 for Division.\n");
     printf("Press #5 for Modulus.\n");
     printf("Press #6 for Exit.\n\n");
     printf("Enter your choice here : ");
     scanf("%d",&c);
     switch(c){
     case 1:
        printf("Sum of two numbers : %d\n",a+b);
        break;
     case 2:
        printf("Difference of two numbers : %d\n",a-b);
        break;
     case 3:
        printf("Multiplication of two numbers : %d\n",a*b);
        break;
     case 4:
        printf("Division of two numbers : %d\n",a/b);
        break;
     case 5:
        printf("Modulus of two numbers : %d\n",a%b);
        break;
     case 6:
        printf("Bye Bye %c Have a nice day..",1);
        break;
     default:
        printf("Wrong choice!!!\n");
        break;
     }}while(c!=6);
     return 1;
 }
