//Program to use switch statement. Display Monday to Sunday.
#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("enter m for Monday \n t for Tuesday \n w for Wednesday \n h for Thursday \n f for  Friday \n s for Saturday \n u for Sunday \n Enter ur choice \t");
scanf("%c",&ch);
switch(ch)
{
case 'm':
case 'M':
printf("monday");
break;
case 't':
case 'T':
printf("tuesday");
break;
case 'w':
case 'W':
printf("wednesday");
break;
case 'h':
case 'H':
printf("thursday");
break;
case 'f':
case 'F':
printf("friday");
break;
case 's':
case 'S':
printf("saturday");
break;
case 'u':
case 'U':
printf("sunday");
break;
default :
printf("wrong input");
break;
}
getch();
}