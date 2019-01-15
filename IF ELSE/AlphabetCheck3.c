/**
 * WAP to input any character and check whether it is alphabet, digit or special.
 */
 #include<stdio.h>
 int main()
 {
     char ch;
     printf("Enter the character to be checked : ");
     scanf("%c",&ch);
     ///ASCII value of alphabets (A-Z = 65-90)(a-z = 97-122)
     if(ch>=65&&ch<=90||ch>=97&&ch<=122)
        printf("%c is an alphabet.",ch);
    ///ASCII value of digits (0-9 = 48-57)
     else if(ch>=48&&ch<=57)
        printf("%c is a digit.",ch);
     else
        printf("%c is a special character.",ch);
     return 1;
 }
