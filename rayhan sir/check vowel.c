#include<stdio.h>
int  main()//determining vowel,consonant by using logical operator
{
    while (1)
    {
        int ch ;
        printf("enter a alphabet \n");
        scanf("%c",&ch);
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' ||ch=='O' ||ch=='u' )

            printf("   the letter   %c is vowel\n",ch);

        else if ((ch>='a')&&(ch<='z') || (ch>='A')&&(ch<='Z'))
            printf(" %c is consonant ",ch);
        else
            // if neither vowel nor consonant then it is not alphabet
            printf(" the entered input is not an alphabert");
    }
}

