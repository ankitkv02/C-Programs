/**
 * WAP to check whether an alphabet is vowel or consonant using switch case
 */

 #include<stdio.h>
 int main(void)
 {
     char ch;
     printf("Enter the character : ");
     scanf("%c",&ch);
     if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
        ch=1;
     else if(ch>=97&&ch<=122||ch>=65&&ch<=90)
        ch=2;
     else
        ch=3;

     switch(ch){
     case 1:
        printf("Vowel.");
        break;
     case 2:
        printf("Consonant.");
        break;
     case 3:
        printf("Not an alphabet.");
        break;
     default:
        printf("Something went wrong!!!");
        break;
     }
     return 1;

 }
