//Program to show swap of two no without using third variable.
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter value for a & b: ");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("after swapping the value of a & b: %d %d",a,b);
getch();
}