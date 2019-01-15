/**
 * WAP to input any alphabet and check whether it is vowel or consonant.
 */
 #include<stdio.h>
 int main()
 {
     char ch;
     printf("Enter the character to be checked : ");
     scanf("%c",&ch);
     if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
        printf("%c is a vowel character.",ch);
     else if(ch>=65&&ch<=90||ch>=97&&ch<=122)
        printf("%c is a consonant character.",ch);
     else
        printf("%c is nether vowel nor consonant.",ch);
     return 1;
 }
