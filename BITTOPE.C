//Program to use bitwise AND operator between the two integers.
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Read the integers from keyboard:- ");
scanf("%d %d",&a,&b);
c=a&b;
printf("\n The Answer after ANDing is: %d ",c);
getch();
}