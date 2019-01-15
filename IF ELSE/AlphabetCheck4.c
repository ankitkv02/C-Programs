/**
 * WAP to check whether a character is uppercase or lowercase alphabet.
 */

 #include<stdio.h>
 int main()
 {
     char ch;
     printf("Enter the character to be checked : ");
     scanf("%c",&ch);
     ///ASCII value of uppercase alphabets(A-Z = 65-90)
     if(ch>=65&&ch<=90)
        printf("%c is a uppercase alphabet.",ch);
     ///ASCII value of lowercase alphabets(a-z = 97-122)
     else if(ch>=97&&ch<=122)
        printf("%c is a lowercase alphabet.",ch);
     else
        printf("%c is not an alphabet.",ch);
     return 1;
 }
