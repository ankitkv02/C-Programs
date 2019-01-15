/**
 * WAP to enter marks of five subjects and calculate.
 */

 #include<stdio.h>
 int main(void)
 {
     int sub[5],i,t,avg,per;
     printf("Enter the marks of subjects \n");
     for(i=1;i<=5;i++){
        printf("Subject #%d : ",i);
        scanf("%d",&sub[i]);
     }
     for(i=1;i<=5;i++){
        t=t+sub[i];
     }
     printf("Total : %d\n",t);
     avg=t/5;
     printf("Average : %d\n",avg);
     per=(t*100)/500;
     printf("Percentage : %d",per);
     return 1;
 }
