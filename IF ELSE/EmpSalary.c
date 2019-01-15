/**
 * WAP to input salary of an employee and calculate its gross salary according to following:
 * BasicSalary >= 10000 : HRA=20%,DA=80%
 * BasicSalary >= 20000 : HRA=25%,DA=90%
 * BasicSalary >= 30000 : HRA=30%,DA=95%
 */

 #include<stdio.h>
 int main(void)
 {
     int bs,hra,da;
     printf("Enter the Basic salary : ");
     scanf("%d",&bs);
     if(bs>=10000&&bs<20000)
     {
         hra=(bs*20)/100;
         da=(bs*80)/100;
     }
     else if(bs>=20000&&bs<30000)
     {
         hra=(bs*25)/100;
         da=(bs*90)/100;
     }
     else if(bs>=30000)
     {
         hra=(bs*30)/100;
         da=(bs*95)/100;
     }
     else
        printf("Something went wrong!!!");
     printf("Gross salary : %d",bs+hra+da);
     return 1;
 }
