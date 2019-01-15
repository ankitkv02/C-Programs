/**
 * WAP to input electricity unit charge and calculate total electricity bill according to the given condition:
 *For first 50 units Rs. 0.50/unit
 *For next 100 units Rs 0.75/unit
 *For next 100 units Rs 1.20/unit
 *For unit above 250 Rs 1.50//unit
 *An additional above surcharge of 20% is added to the bill
 */

 #include<stdio.h>
 int main()
 {
     double unit,bill,total;
     printf("Enter the total unit consumed : ");
     scanf("%lf",&unit);
     if(unit==50)
     {
         bill=0.50*unit;
     }
     else if(unit>50&&unit<=150)
     {
         bill=0.05*50;
         bill=bill+0.75*(unit-50);
     }
     else if(unit>150&&unit<=250)
     {
         bill=0.05*50;
         bill=bill+0.75*100;
         bill=bill+1.20*(unit-150);
     }
     else if(unit>250)
     {
         bill=0.05*50;
         bill=bill+0.75*100;
         bill=bill+1.20*100;
         bill=bill+1.50*(unit-250);
     }
     else
     {
         printf("\nSomething went wrong!! try again later.");
     }

     total=bill+bill*0.2;
     printf("\nTotal Charge : %.3lf",total);
     return 1;
 }
