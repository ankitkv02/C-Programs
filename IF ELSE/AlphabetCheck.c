/**
 * WAP to check whether a character is alphabet or not.
 */

 #include<stdio.h>
 int main()
 {
     char ch;
     printf("Enter the character to be checked :");
     scanf("%c",&ch);
     ///ASCII value of alphabets (A-Z = 65-90)(a-z = 97-122)
     if(ch>=65&&ch<=90||ch>=97&&ch<=122)
        printf("%c is a alphabet.",ch);
     else
        printf("%c is not a alphabet.",ch);
     return 1;
 }
