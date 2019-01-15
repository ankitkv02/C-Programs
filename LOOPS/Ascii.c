/**
 * WAP to print all ASCII character with their values.
 */

 #include<stdio.h>
 int main()
 {
     char ch;
     int i;
     for(i=0;i<255;i++)
     {
         printf("\nASCII character is %c and its value is %d.",ch,i);
         ch++;
     }
     return 1;
 }
