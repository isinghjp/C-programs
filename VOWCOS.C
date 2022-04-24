//Program to Check Vowel or consonant
#include<stdio.h>
#include<conio.h>
void main()
{
    char c;
    int isLVowel, isUVowel;
    clrscr();
    printf("Enter an alphabet: ");
    scanf("%c",&c);

    // evaluates to 1 (true) if c is a lowercase vowel
    isLVowel=(c=='a' || c== 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 (true) if c is an uppercase vowel
    isUVowel=(c=='A' || c== 'E' || c == 'I' || c == 'O' || c == 'U');

    // evaluates to 1 (true) if either isLowercaseVowel or isUppercaseVowel is true
    if (isLVowel || isUVowel)
        printf("%c is a vowel.",c);
    else
        printf("%c is a consonant.",c);
    getch();
}