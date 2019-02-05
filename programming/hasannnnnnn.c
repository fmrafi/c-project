#include<stdio.h>

int main()

{
    char x;
    printf("\n Enter A character here  :");
    scanf("%c",&x);
    if(x=='a' || x=='A' || x=='e' ||x=='E'||x=='o'||x=='O'||x=='u'||x=='U'||x=='i'||x=='I')


        printf("\n This Is Vowel");
    else
        printf("\n This is Consonant");
    return 0;
}
