/**
 * WAP to input marks of five subjects physics,chemistry,biology,mathematics and computer. Calculate percentage and grade according to following:
 * Percentage > 90% Grade A
 * Percentage > 80% Grade B
 * Percentage > 70% Grade C
 * Percentage > 60% Grade D
 * Percentage > 50% Grade E
 * Percentage > 40% Grade F
 */

 #include<stdio.h>
 int main()
 {
     int s1,s2,s3,s4,s5,per;
     printf("Enter Physics marks : ");
     scanf("%d",&s1);
     printf("Enter Chemistry marks : ");
     scanf("%d",&s2);
     printf("Enter Biology marks : ");
     scanf("%d",&s3);
     printf("Enter Mathematics marks : ");
     scanf("%d",&s4);
     printf("Enter Computer marks : ");
     scanf("%d",&s5);
     per=(s1+s2+s3+s4+s5)*100/500;
    if(per>=90)
        printf("Percentage %d : Grade A.",per);
    else if(per<90&&per>=80)
        printf("Percentage %d : Grade B.",per);
    else if(per<80&&per>=70)
        printf("Percentage %d : Grade C.",per);
    else if(per<70&&per>=60)
        printf("Percentage %d : Grade D.",per);
    else if(per<60&&per>=50)
        printf("Percentage %d : Grade E.",per);
    else
        printf("Grade F.",per);
    return 1;
 }
