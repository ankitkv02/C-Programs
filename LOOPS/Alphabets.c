/**
 * WAP to print all alphabets from a to z. - using while loop
 */

 #include<stdio.h>
 int main()
 {
     char ch;
     int i=97;
     printf("\nAlphabets from a - z are :");
     while(i<=122)
     {
         printf("\n%c",i);
         i++;
     }
     return 1;
 }
