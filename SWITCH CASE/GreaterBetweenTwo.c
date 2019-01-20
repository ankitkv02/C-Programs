/**
 * WAP to find maximum between two numbers using switch case.
 */

 #include<stdio.h>
 int main(void)
 {
     int a,b;
     printf("Enter the value of A and B :\n");
     scanf("%d%d",&a,&b);
     switch(a>b)
     {
     case 1:
        printf("A is greater.");
        break;
     case 0:
        printf("B is greater.");
        break;
     default:
        printf("Equal.");
        break;
    }
    return 1;
 }
