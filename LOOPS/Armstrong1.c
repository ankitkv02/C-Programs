/**
 * WAP to enter any number and check whether it is Armstrong number or not.
 */

 #include<stdio.h>
 #include<math.h>
 int main()
 {
     int i,num,n,temp,sum;
     printf("Enter the number :");
     scanf("%d",&num);
     temp=num;
     while(num>=0)
     {
         n=num%10;
         sum=sum+pow(n,3);
         num=num/10-n;
     }
     if(temp==sum)
        printf("\n%d is an Armstrong number.",temp);
     else
        printf("\n%d is not an Armstrong number.",temp);

 }
