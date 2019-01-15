/**
 * WAP to find maximum between two numbers using switch case.
 */

 #include<stdio.h>
 int main(void)
 {
     int a,b,c;
     printf("Enter the value of A and B :\n");
     scanf("%d%d",&a,&b);
     if(a>b)
        c=1;
     else if(b>a)
        c=2;
     else
        c=3;
     switch(c)
     {
     case 1:
        printf("A is greater.");
        break;
     case 2:
        printf("B is greater.");
        break;
     case 3:
        printf("Equal.");
        break;
    }
    return 1;
 }
