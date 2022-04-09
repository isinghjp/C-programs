//Number Of Occurrences Of Vowels, Consonants, Words, Spaces And
//Special Characters In The Given Statement.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void main()
{
char s[100];
int vow=0,cons=0,spc=0,punc=0,l,i;
clrscr();
printf("enter the statement \n");
gets(s);
l=strlen(s);
for(i=0;i<l;i++)
{
if(isalpha(s[i]))
{
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
{
vow++;
}
else
{
cons++;
}
}
if(isspace(s[i]))
{
spc++;
}
if(ispunct(s[i]))
{
punc++;
}
}
printf("\n no.of words=%d",spc+1);
printf("\n no.of vowels=%d",vow);
printf("\n no.of consonants=%d",cons);
printf("\n no.of space=%d",spc);
printf("\n no.on special characters=%d",punc);
getch();
}